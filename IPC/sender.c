#include<stdlib.h>
 #include<stdio.h>
 #include<string.h>
 #include<unistd.h>
 #include<sys/types.h>
 #include<sys/ipc.h>
 #include<sys/msg.h>
 #define MAX_TEXT 512   //maximum length of the message that can be sent allowed
 struct my_msg{
         long int msg_type;
         char some_text[MAX_TEXT];
 };
 int main()
 {
         int running=1;
         int msgid;
         struct my_msg some_data;
         char buffer[50]; //array to store user input
         msgid=msgget((key_t)12345,0666|IPC_CREAT);
         if (msgid == -1) // -1 means the message queue is not created
         {
                 printf("Error in creating queue\n");
                 exit(0);
         }

         while(running)
         {
                 printf("Enter some text:\n");
                 fgets(buffer,50,stdin);
                 some_data.msg_type=1;
                 strcpy(some_data.some_text,buffer);
                 if(msgsnd(msgid,(void *)&some_data, MAX_TEXT,0)==-1) // msgsnd returns -1 if the message is not sent
                 {
                         printf("Msg not sent\n");
                 }
                 if(strncmp(buffer,"end",3)==0)
                 {
                         running=0;
                 }
         }
 }





 //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// #include <sys/msg.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct msgbuf {
//    long mType;
//    char mText[50];
// };

//  int main() {
//    char txtBuf[50];
//    int qId;
//    key_t key;
//    struct msgbuf msg, buf;
//    struct msqid_ds msgCtlBuf;

//    if ( ( key = ftok( "/tmp", 'C' ) ) == -1 ) {
//       perror( "server: ftok failed:" );
//       exit( 1 );
//    }

//    printf( "server: System V IPC key = %u\n", key );

//    if ( ( qId = msgget( key, IPC_CREAT | 0666 ) ) == -1 ) {
//       perror( "server: Failed to create message queue:" );
//       exit( 2 );
//    }

//    printf( "server: Message queue id = %u\n", qId );

//    strcpy( msg.mText, "This is a message" );
//    msg.mType = 1;

//    if ( msgsnd( qId, &msg, sizeof msg.mText, 0 ) == -1 ) {
//       perror( "server: msgsnd failed:" );
//       exit( 3 );
//    }

//    printf( "server: Message sent successfully\n" );

//    printf( "server: waiting..." );
//    sleep( 2 );
//    printf( "server: done waiting. removing message queue...\n" );

//    if ( msgctl( qId, IPC_RMID, &msgCtlBuf ) == -1 ) {
//       perror( "server: msgctl failed:" );
//       exit( 4 );
//    }

//    printf( "server: Message queue removed OK\n" );
// }