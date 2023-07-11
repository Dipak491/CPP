//check weather the number is divisible by 3 or 5 

#include<iostream>
#include <stdbool.h>
using namespace std;


class Divisible
{
public:
	
	bool ChkNumber(int iNo)
	{
		if(((iNo%3)==0) &&((iNo%5)==0))
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
	int ivalue= 0;
	bool iret = false;
	Divisible dobj;

	cout<<"Enter the number";
	cin>>ivalue;

	iret = dobj.ChkNumber(ivalue);
	if(iret== true)
	{
		cout<<"The number is divisible by 3 and 5 ";
	}
	else
	{
		cout<<"The number is not divisile by 3 and 5";
	}
	return 0;
}