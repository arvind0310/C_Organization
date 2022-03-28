#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

uint32_t ipToUInt(const char *ip)
{
        int a, b, c, d;
        uint32_t addr = 0;
        if (sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d) != 4)
                return 0;
        addr = a << 24;
        addr |= b << 16;
        addr |= c << 8;
        addr |= d;
        return addr;
}

void getIP(unsigned char ip3, unsigned char ip2, unsigned char ip1, unsigned char ip0, int count)
{
        printf("\n\n");
        int i, baseIP = 0;
        if (count == 0)
                printf("IP : %d.%d.%d.%d\n", ip3, ip2, ip1, --ip0);
        else
        {
                for (i = 1; i <= count; i++)
                {
                        if (ip0 == 255 && i != count)
                        {
                                ip0 = 1;
                                ip1++;
                                i++;
                                printf("i : %d\n", i);
                                continue;
                        }
                        if (i == 1 || i == count)
                                printf("i : %d IP : %d.%d.%d.%d\n", i, ip3, ip2, ip1, ip0);
                        ip0++;
                }
        }
}

void pingSubnet(char *subnet)
{
        char cidr[40] = {0}, *ptr = NULL, ip[20] = {0}, lowerIp[10] = {0};
        uint32_t net_lower = 0, net_upper = 0, mask = 0, network = 0;
        unsigned char bytes_lw[4], bytes_up[4];
        strcpy(cidr, subnet);
        printf("cidr : %s\n", cidr);
        ptr = strtok(cidr, "/");
        printf("mask : %s\n", ptr);
        mask = atoi(strtok(NULL, "/"));
        printf("mask : %d\n", mask);
        /*from cidr we are generating lower(net_lower) and upper subnet(net_upper)*/
        mask = mask ? 0xFFFFFFFF << (32 - mask) : 0; // converting mask into 32 bit for calculating lower and upper subnet
        printf("ans:%d\n", mask);
        network = ipToUInt(ptr); // converts IP string to int
        net_lower = (network & mask);
        net_upper = (net_lower | (~mask));
        printf("lower : %d upper : %d count : %d\n", net_lower, net_upper, net_upper - net_lower);
        bytes_lw[0] = net_lower & 0xFF;
        bytes_lw[1] = (net_lower >> 8) & 0xFF;
        bytes_lw[2] = (net_lower >> 16) & 0xFF;
        bytes_lw[3] = (net_lower >> 24) & 0xFF;
        bytes_up[0] = net_upper & 0xFF;
        bytes_up[1] = (net_upper >> 8) & 0xFF;
        bytes_up[2] = (net_upper >> 16) & 0xFF;
        bytes_up[3] = (net_upper >> 24) & 0xFF;
        sprintf(ip, "%d.%d.%d.%d", bytes_lw[3], bytes_lw[2], bytes_lw[1], bytes_lw[0]);
        printf("base ip : %s\n", ip);
        sprintf(ip, "%d.%d.%d.%d", bytes_up[3], bytes_up[2], bytes_up[1], bytes_up[0]);
        printf("upper ip : %s\n", ip);
        getIP(bytes_lw[3], bytes_lw[2], bytes_lw[1], ++bytes_lw[0], net_upper - net_lower);
}

void main(int argc, char **argv)
{
        printf("command line arg : %s\n", argv[1]);
        pingSubnet(argv[1]);
}