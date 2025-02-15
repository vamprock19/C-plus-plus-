#ifndef NODE_H
#define NODE_H

class Node 
{
public:
	Node(int data, Node* next)
	{
		this->data = data;
		this->next = next;
	}


	// setters
	void setData(int data)
	{
		this->data = data;
	}
	void setNext(Node* next)
	{
		this->next = next;
	}


	// getters
	int getData()const
	{
		return data;
	}
	Node* getNext()const
	{
		return next;
	}


private:
	int data = 0;
	Node* next; // node pointer
	
};


#endif
