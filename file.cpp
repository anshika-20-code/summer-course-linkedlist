#include <iostream>
using namespace std;

class node {
	public:
	int val;
	node * next;
	
//constructor
	node(int newval)
	{val = newval;
	 next = NULL;
	}
};

class linkedlist {
	public:
	node * head;
//constructor	
	linkedlist()
	{
		head = NULL;
	}
};

void insert (int newval, int pos)
{	if (head == NULL)
	{
		node * temp = new node;
		temp->val = newval;
		head = temp;
	}
	else()
	{
		node * temp = new node;
		while (current != pos-1)
		{
			node * current = head;
			count++;
			current = current->next;
			
		}
	}
	temp->next = NULL;
	current->next = temp;
}
int countitems()
{	
	node * current = head;
	int count = 1;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}
		
void insertat (int newval, int pos)
{
//checking validity of position	
	if (pos < 1 || pos > countitems+1)
	{
		cout<< " not valid position "<<endl;
		return current;
	}
//inserting at first position
	if (pos == 1)
	{
		node * temp = new node;
		temp->next = head;
		head = temp;
	}
//inserting at any other postion	
	else()
	{
	   node * temp = new node;
	   node * current = head;
	   while (current != pos-1)
	{
		count++;
		current = current->next;
		
	}
	temp->next = current->next;
	current->next = temp;
}

void delet()
{
	node * current = head;
	while (current != countitems-1)
	{
		current = current->next;
	}
	delete current->next;
	current->next = NULL;
}
	
void deleteat(int pos)
{ 
//checking validity of position
	if (pos < 1 || pos > countitems+1)
	{
		cout<< " not a valid position "<<endl;
		return current;
	}
//deletion at first position
	if (pos == 1)
	{
		node * temp = head;
		head = head->next;
		delete temp;
	}
//at any other position
	else()
	{
		node * current = head;
		while (current != pos-1)
		{
			count++;
			current = current->next;
		}
	temp = current->next;
	current->next = (current->next)->next;
	delete temp;
}

void display()
{
	node * current = head;
	while(current != NULL)
	{
		cout<<current->val<<"->"<<endl;
		current = current->next;
	}
	cout << "NULL"<<endl;
};
int main()
{
	linkedlist l1;
	for (int i = 0 ; i < 4 ; i++)	
	{
		l1.insert(i);
	}
	l1.display();
	cout<<"countitems : "<<l1.countitems()<<endl;
	l1.inserat(1,3);
	l1.display;
	
};






































