x=1
for i in $(seq 1 6); do
    for j in $(seq 1 5500); do
        date >>/tmp/portData-$x.txt
        snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.1 >>/tmp/portData-$x.txt
        snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.2 >>/tmp/portData-$x.txt
        snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.3 >>/tmp/portData-$x.txt
        snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.4 >>/tmp/portData-$x.txt
        snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.5 >>/tmp/portData-$x.txt
        snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.6 >>/tmp/portData-$x.txt
        sleep 5
    done
    cobo-d s3Push /tmp/portData-$x.txt /mansfield/portDataIssue/
    rm /tmp/portData-$x.txt
    x=$((x + 1))

done
