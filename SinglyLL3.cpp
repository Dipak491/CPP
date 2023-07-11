#include<iostream>
using namespace std;

typedef struct node
{
public:
	int data;
	node *next;

}NODE,*PNODE;


class SinglyLL
{
	private:
			PNODE First;
			int iCount;

	public:
		SinglyLL();

		void InsertFirst(int no);
		void InsertLast(int no);

		void Display();
		int Count();


};

//implimenataion of behaviours 

SinglyLL::SinglyLL()
{
	First = NULL;
	iCount = 0;
}

void SinglyLL::InsertFirst(int no)
{
	PNODE newn = new NODE;

	newn->data = no;
	newn->next = NULL;

	if(First == NULL) //if LL is empty 
	{
		First = newn;
	}
	
	else
	{
		newn->next = First; //new k next me first
		First = newn;  // first ab newn ho gya 
	}
	iCount++;
}


void SinglyLL:: InsertLast(int no)
{
	PNODE newn = new NODE;

	newn->data = no;
	newn->next = NULL;

	if(First == NULL)  //if LL is empty
	{
		First = newn;
	}
	else // if LL contain at least one node 
	{
		PNODE temp = First;  //temp me first store kr liya 

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	iCount++;
}


void SinglyLL::Display()
{
	PNODE temp = First;

	cout<<"Elemets of Linkedlist are :"<<"\n";

	while(temp != NULL)
	{
		cout<<"|"<<temp->data<<" |->";
		temp = temp->next;
	}
	cout<<" NULL"<<"\n";
}


int SinglyLL::Count()
{
	return iCount;
}



int main()
{
	SinglyLL obj;
	obj.InsertFirst(21);
	obj.InsertFirst(51);

	obj.Display();
	cout<<"The count of Elemets are :"<<obj.Count()<<"\n";

	obj.InsertLast(100);
	obj.InsertLast(121);

	obj.Display();
	cout<<"The count of Elemets are :"<<obj.Count()<<"\n";


	return 0;
}