#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct my_msg
{
    long int msg_type;
    char some_text[BUFSIZ];
};
int main()
{
    int running = 1;
    int msgid;
    struct my_msg some_data;
    long int msg_to_rec = 0;
    /* 0 value means to receive the messages in the order in which they were sent */
    msgid = msgget((key_t)12345, 0666 | IPC_CREAT);
    while (running)
    {
        msgrcv(msgid, (void *)&some_data, BUFSIZ, msg_to_rec, 0);
        printf("Data received: %s\n", some_data.some_text);

        if (strncmp(some_data.some_text, "end", 3) == 0)
        {
            running = 0;
        }
    }
    msgctl(msgid, IPC_RMID, 0); // delete the que 
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <sys/msg.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <errno.h>

// struct msgbuf {
//    long mType;
//    char mText[50];
// };

// int main() {
//    char txtBuf[50];
//    int qId;
//    key_t key;
//    struct msgbuf msg, buf;
//    struct msqid_ds msgCtlBuf;

//    if ( ( key = ftok( "/tmp", 'C' ) ) == -1 ) {
//       perror( "client: ftok failed:" );
//       exit( 1 );
//    }

//    printf( "client: System V IPC key = %u\n", key );

//    if ( ( qId = msgget( key, IPC_CREAT | 0666 ) ) == -1 ) {
//       perror( "client: Failed to create message queue:" );
//       exit( 2 );
//    }

//    printf( "client: Message queue id = %u\n", qId );

//    if ( msgrcv( qId, &buf, sizeof msg.mText, 1, 0 ) == -1 )
//       perror( "client: msgrcv failed:" );
//    else
//       printf( "client: Message received = %s\n", buf.mText );

//    //
//    // attempt read again and block on queue waiting for server to IPC_RMID
//    //
//    if ( msgrcv( qId, &buf, sizeof msg.mText, 1, 0 ) == -1 )
//       perror( "client: msgrcv failed:" );
//    else
//       printf( "client: Message received = %s\n", buf.mText );

//    printf( "client: errno = %d\n", errno );

//    //
//    // attempt read again but message queue should now be gone
//    //
//    if ( msgrcv( qId, &buf, sizeof msg.mText, 1, 0 ) == -1 )
//       perror( "client: msgrcv failed:" );
//    else
//       printf( "client: Message received = %s\n", buf.mText );

//    printf( "client: errno = %d\n", errno );
// }