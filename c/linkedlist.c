HomeProgramming SimplifiedC C++ and Java programming tutorials and programs
Custom Search
You are here
Home » C programming » C programs » Linked list in C
Linked list in C
Linked list
Linked lists are useful data structures and offer many advantages. A new element can be inserted at the beginning or at the end in constant time (in doubly linked lists). Memory utilization is efficient as it's allocated when we add new elements to a list and list size can increase/decrease as required. They are useful when the size of a list is unknown and changes frequently. It uses a node that stores data and a pointer to the next node.



struct node {
  int data;
  struct node *next;
};
Linked list program in C
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void insert_at_begin(int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_end();
int count = 0;

int main () {
  int i, data;

  for (;;) {
    printf("1. Insert an element at the beginning of linked list.\n");
    printf("2. Insert an element at the end of linked list.\n");
    printf("3. Traverse linked list.\n");
    printf("4. Delete an element from beginning.\n");
    printf("5. Delete an element from end.\n");
    printf("6. Exit\n");

    scanf("%d", &i);

    if (i == 1) {
      printf("Enter value of element\n");
      scanf("%d", &data);
      insert_at_begin(data);
    }
    else if (i == 2) {
      printf("Enter value of element\n");
      scanf("%d", &data);
      insert_at_end(data);
    }
    else if (i == 3)
      traverse();
    else if (i == 4)
      delete_from_begin();
    else if (i == 5)
      delete_from_end();
    else if (i == 6)
      break;
    else
      printf("Please enter valid input.\n");
  }

  return 0;
}

void insert_at_begin(int x) {
  struct node *t;

  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;

  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }

  t->next = start;
  start = t;
}

void insert_at_end(int x) {
  struct node *t, *temp;

  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;



  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }

  temp = start;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;
}

void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  printf("There are %d elements in linked list.\n", count);

  while (t->next != NULL) {
    printf("%d\n", t->data);
    t = t->next;
  }
  printf("%d\n", t->data); // Print last node
}



void delete_from_begin() {
  struct node *t;
  int n;

  if (start == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  n = start->data;
  t = start->next;
  free(start);
  start = t;
  count--;

  printf("%d deleted from the beginning successfully.\n", n);
}

void delete_from_end() {
  struct node *t, *u;
  int n;

  if (start == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  count--;

  if (start->next == NULL) {
    n = start->data;
    free(start);
    start = NULL;
    printf("%d deleted from end successfully.\n", n);
    return;
  }

  t = start;

  while (t->next != NULL) {
    u = t;
    t = t->next;
  }

  n = t->data;
  u->next = NULL;
  free(t);

  printf("%d deleted from end successfully.\n", n);
}

Linked list in C

There are many variants of linked lists such as a circular linked list in which the last node contains the address of the first node, doubly linked lists in which every node contains pointers to previous and next nodes and circular doubly linked lists which is a circular doubly-linked list.

Arrays should be used when the size of data to be stored is known in advance and does not change frequently. A disadvantage of a linked list is that we can not access every element in constant time as in an array. Understanding linked lists will help you to learn the tree data structure.



Share this
Custom Search

C programs
C programming
C graphics
C graphics programs
C source codes
Tutorials
Data structures
C++ programs
Java programs


Programming Simplified is licensed under a Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License.

Home | About | Contact | Programmer Resources | Sitemap | Privacy | Facebook
