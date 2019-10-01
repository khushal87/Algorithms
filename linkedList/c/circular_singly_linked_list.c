//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//    int data;
//    struct node *next;
//};
//
//typedef struct node Node;
//
//Node *create(Node *start) {
//    Node *newnode, *prev;
//    int data;
//    do {
//        newnode = (Node *) malloc(sizeof(Node));
//        printf("Enter data - \n");
//        scanf("%d", &newnode->data);
//        if (start == NULL) {
//            start = newnode;
//        } else {
//            prev->next = newnode;
//        }
//        prev = newnode;
//        newnode->next=start;
//        printf("Do you want to continue - \n");
//        scanf("%d", &data);
//    } while (data != 0);
//    return start;
//}
//
//void display(Node *start) {
//    Node *ptr = start;
//    while (ptr->next != start) {
//        printf("%d\t", ptr->data);
//        ptr = ptr->next;
//    }
//    printf("%d", ptr->data);
//}
//Node *insert_begin(Node* start)
//{
//    Node *newnode;
//    newnode = (Node *) malloc(sizeof(Node));
//    printf("Enter data to be entered in the beginning of the list - \t");
//    scanf("%d", &newnode->data);
//    Node *ptr;
//    while(ptr->next!=start)
//    {
//        ptr=ptr->next;
//    }
//    ptr->next=newnode;
//    newnode->next=start;
//    start=newnode;
//    return start;
//}
//Node *insert_end(Node* start) {
//    Node *newnode;
//    newnode = (Node *) malloc(sizeof(Node));
//    printf("Enter data to be entered in the beginning of the list - \t");
//    scanf("%d", &newnode->data);
//    Node *ptr;
//    while (ptr->next != start) {
//        ptr = ptr->next;
//    }
//    ptr->next = newnode;
//    newnode->next = start;
//    return start;
//}
//
//Node *delete_begin(Node *start) {
//    Node *ptr = start;
//    while (ptr->next != start) {
//        ptr = ptr->next;
//    }
//    ptr->next = start->next;
//    free(start);
//    start = ptr->next;
//    return start;
//}
//Node *delete_end(Node* start) {
//    Node *ptr = start;
//    Node *preptr;
//    while (ptr->next != ptr) {
//        preptr = ptr;
//        ptr = ptr->next;
//    }
//    preptr->next = ptr->next;
//    free(ptr);
//    return start;
//}
//
//Node *delete_after(Node *start) {
//    int val;
//    printf("Enter the info of the node of which you want to delete the next node - \n");
//    scanf("%d", &val);
//    Node *ptr=start;
//    Node *preptr;
//    while (preptr->data != val) {
//        preptr = start;
//        start = start->next;
//    }
//    preptr->next = ptr->next;
//    if(ptr==start)
//        start=preptr->next;
//    free(ptr);
//    return start;
//}
//
//Node *delete_list(Node* start) {
//    Node *ptr = start;
//    while (ptr->next != start) {
//        start = delete_begin(ptr);
//    }
//    free(start);
//    return start;
//}
//
//int main() {
//    Node *start = NULL;
//    start = create(start);
//    start=insert_end(start);
//    start=insert_begin(start);
//    display(start);
//}