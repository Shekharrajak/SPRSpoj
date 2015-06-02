#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
 
/* Linked list node */
struct node
{
    int data;
    struct node* next;
};
int alt_sum(node *head) {
  int sum = 0;
  while(head != NULL) {
  	if(head->next!=NULL){
  	
    sum += head->data;
    head = head->next;
    head = head->next;
	}
	else{
		break;
	}
  }
  return sum;
}
 
/* Function to create a new node with given data */
struct node *newNode(int data)
{
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
/* Function to insert a node at the beginning of the Doubly Linked List */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = newNode(new_data);
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 

void printList(struct node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
 
/* Drier program to test above function */
int main(void)
{
    struct node* res = NULL;
    struct node* first = NULL;
    struct node* second = NULL;
 
    // create first list 7->5->9->4->6
    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
   
 
   
 	int r=alt_sum(first);
 	cout<<r;
 
 return 0;
 }
 
    

 
  
