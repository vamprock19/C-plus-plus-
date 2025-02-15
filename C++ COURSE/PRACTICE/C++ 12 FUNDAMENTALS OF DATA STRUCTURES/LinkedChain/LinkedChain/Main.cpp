#include<iostream>
#include"Node.h"
using namespace std;

Node* createChain();
void deleteChain(Node* head);
void printChain(Node* head);

int main()
{
	Node* Head;
	Head = createChain();
	printChain(Head);
	delete(Head);

	return 0;
}

Node* createChain()
{
	Node* head = nullptr;

	for (int i = 0; i < 10; i++)
	{
		head = new Node(i, head); 
	}
	return head;
}

void deleteChain(Node* head)
{
	Node* nodeToDelete;

	while (head != nullptr) 
	{
		nodeToDelete = head;
		head = head->getNext();
		delete nodeToDelete;
	}
}

void printChain(Node* head)
{

	Node* walker = head;
	int counter = 0;
	while (walker != nullptr)
	{
		cout << walker->getData() << endl;
		walker = walker->getNext();
		counter++;
	}
	cout << "elements: " << counter << endl;
}