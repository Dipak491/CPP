#include<iostream>
using namespace std;


int maximum(int iNo1,int iNo2)
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
int main()
{
	int ivalue1 = 0;
	int ivalue2 =0;
	int iRet = 0;

	cout<<"Enter first number"<<endl;
	cin>>ivalue1;

	cout<<"Enter secound number"<<endl;
	cin>>ivalue2;

	iRet =  maximum(ivalue1,ivalue2);
	cout<<iRet<<" Greater";


	return 0;
}