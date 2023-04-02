#include<iostream>

using namespace std;

class Demo
{
    public:
    int No1;
    int No2;


    int Addition(int a, int b)   //(Addition@2ii (Demo *this, int no1,int no2)
    {
        cout<<"Addition of two interger"<<"\n";
        return No1 + No2;
    }

    float Addition(float a, float b)
    {
        cout<<"Addition of two interger"<<"\n";
        return No1 + No2;
    }

    double Addition(double a, double b)
    {
        cout<<"Addition of two interger"<<"\n";
        return No1 + No2;
    }


};

int main()
{
    Demo obj1;

    int iret = obj1.Addition(21,34);
    cout<<"Addition is "<<iret<<"\n";

    float fret = obj1.Addition(12.3f,34.6f);
    cout<<"Addition is f"<<fret<<"\n";
    
    double dret = obj1.Addition(34.9,65.9);
    cout<<"Addition is d"<<dret<<"\n";

    return 0;
}