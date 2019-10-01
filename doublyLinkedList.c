#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// element of linked list
typedef struct Node 
{
  struct Node *left;
  struct Node *right;
  int data;
} Node;

// create new list with dummy head
Node * new_list()
{
  Node *new = (Node*) malloc(sizeof(Node));
  new->data = -1;
  new->right = new;
  new->left = new;
  return new;
}

// append element to list
Node * insert_right(Node *list, int data)
{
  Node *new = (Node *) malloc(sizeof(Node));
  new->data = data;
  new->left = list;
  new->right = list->right;
  list->right = new;
  new->right->left = new;
  return new;
}

// delete element in linked list and change pointers
Node * delete(Node *list){
  list->right->left = list->left;
  list->left->right = list->right;
  return list->left;
}

// iterate through list and print all elements
void print_all(Node* list)
{
  Node *head = list;
  Node *current = list;
  printf("%d ", head->data);
  while (head != (current = current->right))
  {
    printf("%d ", current->data);
  }
  printf("\n");
}


int main()
{
  // create new list with head as first element
  Node *head = new_list();
  Node *current = head;
  int i;

  // fill list with dummy data
  for(i = 0; i < 10; i++)
  {
    current = insert_right(current, i);
  }

  // print list from last element to first
  printf("print list from first to last element:\n");
  print_all(head);

  print_all(current);

  // delete second to last element
  current = current->left;
  current = delete(current); 
  printf("List after deleting second to last element:\n");
  print_all(head);

  // delete last element
  current = delete(head);
  printf("List after deleting head:\n");
  print_all(current);

  return 0;
}
