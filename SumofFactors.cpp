#include<iostream>
using namespace std;

class Display
{
public:
	int i =0;
	int sum =0;

	void Facrtors(int iNo)
	{
		if((iNo < 0 ))  //filter 
		{
			iNo = -iNo;
		}

		for( i = 1; i<=(iNo/2); i++)
		{
			if((iNo % i)==0)
			{
				cout<<"Facrtors is "<<i<<endl;
				sum = sum + i;
			}
		}
		cout<<"Sum of factor is "<<sum;
	}
};

int main()
{
	int ivalue1 =0;
	Display dobj;

	cout<<"Enter the number :";
	cin>>ivalue1;

	dobj.Facrtors(ivalue1);
	


	return 0;
}