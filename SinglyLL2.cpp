#include<iostream>
using namespace std;

class node
{
	int data;
	node *next;

};
typedef node NODE, *PNODE;

class SinglyLL
{
	private:
			PNODE First;
			int iCount;

	public:
		SinglyLL();

		void InsertFirst(int no);
		void InsertLast(int no);

};

//implimenataion of behaviours 

SinglyLL::SinglyLL()
{
	First = NULL;
			iCount = 0;
}

void SinglyLL::InsertFirst(int no)
{

}

void SinglyLL:: InsertLast(int no)
{

}



int main()
{
	SinglyLL obj;
	return 0;
}