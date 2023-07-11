#include<iostream>
using namespace std;

class number
{
public:
	int iNo1;
	int iNo2;

	int Maximun()
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
	int ivalue1,ivalue2;
	int iret =0;
	Maximun mobj;

	cout<<"Enter two number"<<endl;
	cin>>ivalue1>>ivalue2;
	mobj.iNo1 = ivalue1;
	mobj.iNo2 = ivalue2;

	iret = mobj.Maximun();
	cout<<"Greater"<<iret;


	return 0;
}