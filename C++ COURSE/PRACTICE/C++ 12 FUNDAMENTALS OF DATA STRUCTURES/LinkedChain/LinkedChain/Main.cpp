#include<iostream>
#include"Node.h"
using namespace std;

Node* createChain();
void deleteChain(Node* head);
void printChain(Node* head);

int main()
{
	return 0;
}

Node* createChain()
{
	Node* head = nullptr;

	for (int i = 0; i < 10; i++)
	{
		head = new Node(i, head); // data , Node
	}
	return head;
}
void deleteChain(Node* head)
{
	Node* nodeToDelete;

	while (head != nullptr) // p
	{

	}
}
void printChain(Node* head)
{

}