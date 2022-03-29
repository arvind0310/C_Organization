// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/wait.h>
#include <stdlib.h>

char count[2];
int cnt;

int getChildProcessCount(int id)
{
	char command[100] = {0};
	FILE *fp = NULL;
	char buff[3] = {0};
	printf("parent id -->: %d\n", id);

	// sprintf(command, "ls /proc/%d/task | wc -l", id);
	sprintf(command, "ps --ppid %d --no-headers | wc --lines", id);

	fp = popen(command, "r");
	if (fp == NULL)
	{
		printf("fails\n");
		return 0;
	}
	else
	{
		if (fgets(buff, 3, fp) == NULL)
		{
			printf("fail1\n");
			return 0;
		}
		return atoi(buff);
	}
}

void dummyFunction()
{
	printf("I am a dummy function : %d\n", getpid());
	printf("parent id : %d\n", getppid());
	sleep(20);
}

void forkTest()
{
	int i = 0, ppid = getpid();
	printf("parent process - %d\n", getpid());
	for (; i < 5; i++)
	{
		printf("process count : %d\n", getChildProcessCount(ppid));
		if (fork() == 0)
		{
			cnt++;
			sprintf(count, "%d", cnt);
			printf("count : %s\n", count);
			dummyFunction();
			goto dummy;
		}
		else
		{
			printf("continue..\n");
			// printf("process count : %d\n", getChildProcessCount(ppid));
			sleep(2);
		}
	}
	sleep(50);
	printf("return from forkTest()\n");
	return;
dummy:
	printf("Hey its end for child process - %d\n", getpid());
	cnt--;
	sprintf(count, "%d", cnt);
	printf("count : %s\n", count);
	exit(0);
}

int main()
{
	// Write C code here
	forkTest();
	printf("END \n");
	return 0;
}
