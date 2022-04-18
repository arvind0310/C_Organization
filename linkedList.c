//+++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// int main()
// {

// struct Node *head, *second, *third;

// // struct Node *head;
// // struct Node *second;
// // struct Node *third;

// head=(struct Node*)malloc(sizeof(struct Node));
// second= (struct Node*)malloc(sizeof(struct Node));
// third= (struct Node*)malloc(sizeof(struct Node));

// head->data = 1;
// head->next = second;
// printf("%d\n",head->data);

// second->data=2;
// printf("%d\n",second->data);
// second->next=third;

// third->data=3;
// third->next=NULL;

// return 0;

// }

//+++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int data;
//     // node_t *next; //wrong
//     struct node *next;
// } node_t;

// int main()
// {

//     node_t *head, *second, *third;

//     head = (node_t *)malloc(sizeof(node_t));
//     second = (node_t *)malloc(sizeof(node_t));
//     third = (node_t *)malloc(sizeof(node_t));

//     head->data = 1;
//     printf("%d\n", head->data);

//     head->next = (node_t *)malloc(sizeof(node_t));
//     head->next->data = 2;
//     printf("%d\n", head->next->data);

//     head->next->data = 3;
//     printf("%d\n", head->next->data);

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++