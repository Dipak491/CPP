#include<iostream>
using namespace std;

 int Tax(int Income)
	{
		int Res =0;
		if(Income < 500000)
		{
			Res;
		}
		else if(Income > 500000)
		{
			Res = (int)(Income*0.2);
		}
		else
		{
			Res = (int)(Income*0.3);
		}
		return Res;
	}


int main()
{
	int ivalue = 0;
	int iRet = 0;

	cout<<"Enter your income:"<<endl;
	cin>>ivalue;

	//IncomeTax obj = new IncomeTax();
	iRet =Tax(ivalue);
	cout<<"Your tax will be"<<iRet;


	
	return 0;
}