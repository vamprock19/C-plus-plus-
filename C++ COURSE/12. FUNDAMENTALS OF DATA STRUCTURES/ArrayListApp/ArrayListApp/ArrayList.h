#ifndef ARRAY_LIST_H
#define ARRYA_LIST_H

#include<iostream>
#include"List.h"

class ArrayList : public List // connecting the 2 classes
{
public:

	ArrayList(int s = 16) : MAX_SIZE(s)
	{
		mArray = new int[MAX_SIZE];
		mNumElements = 0;

	}
	void add(int newEntry)
	{

	}
	void add(int newEntry, int position)
	{

	}
	void set(int newEntry, int position)
	{

	}

	bool contains(int entry)const
	{
		return false;
	}
	int find(int entry)const
	{
		return 0;
	}
	int remove(int position)
	{
		return 0;
	}
	void makeEmpty()
	{

	}

	void size()const
	{
		return 0;
	}
	bool isEmpty()const
	{

	}
	void printList()const
	{

	}


private:

	int* mArray; 
	const int MAX_SIZE;
	int mNumElements;
};

#endif
