// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>
// int globalVariable = 0;

// int main()
// {
//     pid_t pid;
//     printf("before fork...\n");
//     printf(">> %d\n", getpid());

//     pid = fork();
//     if (pid < 0)
//     {
//         printf("error");
//     }
//     else if (pid == 0)
//     {
//         globalVariable = 0;
//         printf("I am child  id : %d\n", getpid());
//         printf("My parent's id : %d\n", getppid());
//         sleep(20);
//     }
//     else
//     {
//          wait(); // so that first child process run
//         printf("I am parent havind id : %d\n", getpid());
//         printf("My child's id : %d\n", pid);
//         ++globalVariable;
//         sleep(30);
//     }
//     printf("this will be run by both child and parent\n\n");
//     printf("count:%d\n",globalVariable);

// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>
// // int global = 0;

// int main()
// {
//    pid_t pid, pid2;
//    printf("before fork...\n");
//    pid = fork();
//    if (pid < 0)
//    {
//       printf("error");
//    }
//    else if (pid == 0)
//    {
//       int global = 0;

//       // child process created, code for child process is written inside here
//       // we can create as many child processes in here
//       pid2 = fork();
//       if (pid2 == 0)
//       {
//          printf("I am New child process with id : %d\n", getpid());
//          printf("First child's id : %d\n", getppid());
//       }
//       else
//       {
//          printf("I am child  id : %d\n", getpid());
//          printf("My parent's id : %d\n", getppid());
//       }
//    }
//    else
//    { // pid > 0, code inside parent process is written here
//       // wait();
//       printf("I am parent havind id : %d\n", getpid());
//       printf("My child's id : %d\n", pid);
//     //   ++global;
//    }
//    printf("this will be run by both child and parent\n\n");
// //    printf("count:%d\n",global);

// }

//++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <string.h>
// #include <stdlib.h>
// int globalVariable = 0;

/*
int getChildProcessCount()
{
   char command[100] = {0};
   FILE *fp = NULL;
   char buff[3] = {0};
   strncpy(command, "ps -a1 | grep ./a.out | wc -l", 100);

   fp = popen(command, "r");
   if (fp == NULL)
   {
      return 0;
   }
   else
   {
      if (fgets(buff, 3, fp) == NULL)
         return 0;
      pclose(fp);
      return atoi(buff);
   }
} */

// int main()
// {
//    pid_t pid;
//    //  printf(">> parent : %d\n", getpid());
//    int i = 0;
//    while (i < 5)
//    {
//     //   printf("count:%d\n", globalVariable);
//       if (globalVariable >= 2)
//       {
//          printf("limit exceded\n");
//          sleep(3);
//          continue;
//       }

//       pid = fork();
//       if (pid < 0)
//       {
//          printf("error");
//       }
//       else if (pid == 0)
//       {
//          printf("I am child  id : %d\n", getpid());
//          sleep(1);
//          goto print;
//       }
//       else
//       {
//          // wait(); // so that first child process run
//          printf("I am parent havind id : %d\n", getpid());
//          sleep(1);
//          globalVariable++;
//          i++;
//       }
//    }
//    return;
//    // while(getChildProcessCount() > 1 )
//    //    sleep(3);
// print:
//    printf("\thii from print\n");
// //    globalVariable--;
//    printf("\tglobalVarPrint:%d\n", globalVariable);

//    exit(0);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// int main(void) {
//     int fd[2];
//     int depth = 0; /* keep track of number of generations from original */
//     int i;
//     pipe(fd);  /* create a pipe which will be inherited by all children */
//     for(i=0; i<3; i++) {
//         if(fork() == 0) {  /* fork returns 0 in the child */
//             write(fd[1], &i, 1);  /* write one byte into the pipe */
//             depth += 1;
//         }
//     }
//     close(fd[1]);  /* exercise for the reader to learn why this is needed */
//     if( depth == 0 ) { /* original process */
//       i=0;
//       while(read(fd[0],&depth,1) != 0)
//         i += 1;
//       printf( "%d total processes spawned", i);
//     }

//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <sys/types.h>
// #include <sys/wait.h>
// #include <unistd.h>

// int main(void)
// {
//     pid_t before_pid, after_pid;
//     pid_t forked_pid;
//     int count;
//     int i;
//     int status;

//     before_pid = getpid();
//     count = 1; /* count self */
//     while(i<5) {
//         forked_pid = fork();

//         if (forked_pid > 0) {
//             waitpid(forked_pid, &status, 0);
//             /* parent process - count child and descendents */
//             i++;
//             count += WEXITSTATUS(status);
//         } else {
//             /* Child process - init with self count */
//             count = 1;
//         }
//       printf("before_pid %d\n", getpid());
//     }

//     after_pid = getpid();
//     if (after_pid == before_pid) {
//         printf("%d processes created\n", count);
//     }

//     return (count);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <sys/types.h>
// #include <sys/wait.h>
// #include <unistd.h>

// int main(void)
// {
//     pid_t before_pid, after_pid;
//     pid_t forked_pid;
//     int count;
//     int i;
//     int status;

//     before_pid = getpid();
//     count = 1; /* count self */
//     for (i = 0; i < 1; i++) {
//         forked_pid = fork();

//         if (forked_pid > 0) {
//             waitpid(forked_pid, &status, 0);
//             /* parent process - count child and descendents */
//             count += WEXITSTATUS(status);
//         } else {
//             /* Child process - init with self count */
//             printf("hii from child\n");
//             count = 1;
//         }
//     }

//     after_pid = getpid();
//     if (after_pid == before_pid) {
//         printf("%d processes created\n", count);
//     }

//     return (count);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>
// int main()
// {
//     int i;
//     pid_t pid;
//     while(i < 5){

//     pid = fork();
//     if (pid < 0)
//     {
//         printf("error");
//     }
//     else if (pid == 0)
//     {
//         printf("I am child  id : %d\n", getpid());
//         printf("childNum : %d\n",i);
//     }
//     else
//     {
//         //wait // so that first child process run
//         printf("I am parent havind id : %d\n", getpid());
//         i++;
//     }
// }
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// int main(void) {
//     int processes = 4;
//     int i;
//     int fork_result;
//     int number_of_children;
//     for (i = 1; i <= processes; i++) {
//        sleep(10);
//         fork_result = fork();
//         if (fork_result > 0) {
//             printf("parent %d says: hello child #%d, how are you?\n", getpid(),fork_result);
//             number_of_children++;
//         } else if (fork_result == 0) {
//             printf("pid: %d\n", getpid());
//             exit(0);
//         } else if (fork_result < 0) {
//             printf("parent says: fork() failed\n");
//         }
//     }
//     int status;
//     for (i = 1; i <= number_of_children; i++) {
//         wait(&status);
//     }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// #include <sys/wait.h>
// #include <signal.h>

// volatile sig_atomic_t shutdown_flag = 1;

// void cleanupRoutine(int signal_number)
// {
//    shutdown_flag = 0;
// }

// int main(void)
// {
//    int wstatus;
//    for (int i = 0; i < 5; i++)
//    {
//       pid_t c_pid = fork();
//       if (c_pid == -1)
//       {
//          perror("fork");
//          exit(EXIT_FAILURE);
//       }

//       if (c_pid == 0)
//       {
//          printf("printed from child process - %d\n", getpid());

//          int count = 0;

//          struct sigaction sigterm_action;
//          memset(&sigterm_action, 0, sizeof(sigterm_action));
//          sigterm_action.sa_handler = &cleanupRoutine;
//          sigterm_action.sa_flags = 0;

//          // Mask other signals from interrupting SIGTERM handler
//          if (sigfillset(&sigterm_action.sa_mask) != 0)
//          {
//             perror("sigfillset");
//             exit(EXIT_FAILURE);
//          }
//          // Register SIGTERM handler
//          if (sigaction(SIGTERM, &sigterm_action, NULL) != 0)
//          {
//             perror("sigaction SIGTERM");
//             exit(EXIT_FAILURE);
//          }

//          while (shutdown_flag)
//          {
//             count += 1;
//          }
//          printf("count = %d\n", count);

//          exit(EXIT_SUCCESS);
//       }
//       else
//       {
//          printf("printed from parent process - %d\n", getpid());
//          int ret;

//          sleep(15);

//          ret = kill(c_pid, SIGKILL);
//          if (ret == -1)
//          {
//             perror("kill");
//             exit(EXIT_FAILURE);
//          }

//          if (waitpid(c_pid, &wstatus, WUNTRACED | WCONTINUED) == -1)
//          {
//             perror("waitpid");
//             exit(EXIT_FAILURE);
//          }
//       }
//    }
//    exit(EXIT_SUCCESS);
// }


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
   int val=1222222222222;
   printf("%lu\n",sizeof(val));
}

