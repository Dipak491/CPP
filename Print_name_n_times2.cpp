#include<iostream>
using namespace std;

class loop
{
public:
	void frequency(int n)
	{
		for(int i =1; i<=n; i++)
		{
			cout<<"Jay ganesh...\n";
		}
	}
	
};

int main()
{	
	//int i= 0;
	int num=0;
	loop lobj;


	cout<<"Enter the number ";
	cin>>num;
	lobj.frequency(num);


	
}