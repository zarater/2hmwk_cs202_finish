#include "Inheritance.h"

// Node Struct defination
struct Node
{
	activity_manager *baseClass;
	Node *next;
};

void addNode(Node **head,activity_manager *tempClass);
void displayNode(Node **head);
void deleteNode(Node **head, activity_manager *key);