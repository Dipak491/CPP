 #include<iostream>
#include<stdbool.h>
using namespace std;

class Number
{	
public:
	//int iNo1;

	bool Evenodd(int iNo1)
	{
		if((iNo1 % 2) ==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};

int main()
{	
	int ivalue1;
	bool iret = false;
	Number nobj;

	cout<<"Enter the number \n";
	cin>>ivalue1;

	iret = nobj.Evenodd(ivalue1);
	if(iret == true)
	{
		cout<<"Number is even";	
	}
	else
	{
		cout<<"Number is odd";
	}
	return 0;
}
