#include<iostream>
#include"Node.h"
#include<string>

using namespace std;

Node* createChain();
void deleteChain(Node*& head);
void printChain(Node* head);

int main()
{
	Node* theHead;
	theHead = createChain();
	printChain(theHead);
	deleteChain(theHead);
	
	return 0;
}

Node* createChain()
{
	Node* head = nullptr;

	for (int i = 0; i < 25; i++)
	{
		head = new Node(i, head); //Node(data, node's name)
	}
	return head;
}
void deleteChain(Node*& head) /* *& ensures we can modify the original pointer
							  outside the function/method */
{
	Node* nodeToDelete;


	while (head != nullptr) // the head still valid until null
	{
		nodeToDelete = head;
		head = head->getNext();
		delete nodeToDelete;
	}
}
void printChain(Node* head) // 
{
	Node* walker = head; // walker copies the data of the head
	int counter = 0;


	while (walker != nullptr) // nullptr is the value after the tail
	{
		cout << walker->getData() << endl;
		walker = walker->getNext();
		counter++;
	}
	cout << "Number of elements: " << counter << endl;
}