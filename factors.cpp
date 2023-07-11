#include<iostream>
using namespace std;

class Display
{
public:
	int i =0;
	void Facrtors(int iNo)
	{
		for( i = 1;i<iNo/2; i++)
		{
			if(iNo/i)
			{
				cout<<"Facrtors is "<<i<<endl;
			}
			
		}
		
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