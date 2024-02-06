 /* Write a C linked list program to add a new node to the ascending order.*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *next;
};

// function to show linked list
void show(struct node *root){
	struct node *temp = root;
	printf("\nLinkedList: ");
	while(temp!=NULL){
		printf("%d -> ",temp->val);
		temp = temp->next;
	}
	printf("NULL\n\n");
}

// Function to insert a new value - val into linked list head.
// The value - val is inserted in the linked list such that
// the resultant linked list is also sorted
struct node* insert_sortedll(struct node *head, int val){
	
	struct node *ptr;
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->val = val;
	temp->next = NULL;
	
	if(head==NULL){
		// if linked list is empty
		// simply set head to temp
		head = temp;	
	}
	else if(temp->val <= head->val){
		// this section runs if the new val is smaller then
		// the first value in the linked list
		// simple insert temp at the beginning of the linked list
		temp->next = head;
		head = temp;
	}
	else{
		// iterating each element of the linked list
		// to find the node whose value is just smaller than val
		ptr = head;
		while(ptr->next!=NULL&&ptr->next->val<temp->val){
			ptr = ptr->next;
		}
		// ptr now points to the node whose value is just less than val
		// we simply insert temp between ptr and ptr->next
		temp->next = ptr->next;
		ptr->next = temp;
	}
	
	return head;
	
}

int main() {

	struct node *head = NULL;
	
	printf("Insert 24 into the LinkedList !!!\n");
	head = insert_sortedll(head, 24);
	printf("Insert 11 into the LinkedList !!!\n");
	head = insert_sortedll(head, 11);
	printf("Insert 64 into the LinkedList !!!\n");
	head = insert_sortedll(head, 64);
	
	show(head);
	
	printf("Insert 34 into the LinkedList !!!\n");
	head = insert_sortedll(head, 34);
	printf("Insert 0 into the LinkedList !!!\n");
	head = insert_sortedll(head, 0);
	printf("Insert 15 into the LinkedList !!!\n");
	head = insert_sortedll(head, 15);

	show(head);

}
