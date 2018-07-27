#include<iostream>
#include<cstring>
#include "node.h"

//*********************implementation node *************************//

void addNode(Node **head,activity_manager *tempClass) 
// insertion in the beginning
{
	Node *ptr = new Node;
	ptr->baseClass = tempClass;
	ptr->next = *head;
	
	Node *temp;
	temp = *head;
	if(*head != NULL)
	{
		while(temp->next != *head)
			temp = temp->next;
		temp->next = ptr;
	}
	else
	{
		ptr->next = ptr;
	}
}

void displayNode(Node **head)
{
	Node *temp = *head;
	if(*head != NULL)
	{
		temp->baseClass->display();
		temp = temp->next;
	}
	else 
		return;

	while(temp != *head)
	{
		temp->baseClass->display();
		temp = temp->next;	
	}
}

void deleteNode(Node **head, activity_manager *key)
{
    if (*head == NULL)
        return;
 
    // Find the required node
    Node *curr = *head, *prev;
    while (curr->baseClass != key)
    {
        if (curr->next == *head)
        {
            cout << "\nGiven node is not found"
                   " in the list!!!\n";
            break;
        }
 
        prev = curr;
        curr = curr -> next;
    }
 
    // Check if node is only node
    if (curr->next == *head)
    {
        *head = NULL;
        free(curr);
        return;
    }
 
    // If more than one node, check if
    // it is first node
    if (curr == *head)
    {
        prev = *head;
        while (prev -> next != *head)
            prev = prev -> next;
        *head = curr->next;
        prev->next = *head;
        free(curr);
    }
 
    // check if node is last node
    else if (curr -> next == *head)
    {
        prev->next = *head;
        free(curr);
    }
    else
    {
        prev->next = curr->next;
        free(curr);
    }
}
