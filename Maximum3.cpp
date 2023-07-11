#include<iostream>
using namespace std;

class Maximum
{
public:
	int iNo1;
	int iNo2;

	int MaxNumber(int iNo1,int iNo2)
	{
		if(iNo1>iNo2)
		{
			return iNo1;
		}
		else
		{
			return iNo2;
		}
	}

};


int main()
{	
	int ivalue1 = 0;
	int ivalue2 = 0;
	int iret = 0;
	Maximum mobj;

	cout<<"Enter first number "<<endl;
	cin>>ivalue1;

	cout<<"Enter secound number"<<endl;
	cin>>ivalue2;


	iret = mobj.MaxNumber(ivalue1,ivalue2);
	cout<<" Greater"<<iret;

	return 0;

}