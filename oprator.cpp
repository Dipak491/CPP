#include<iostream>
using namespace std;

class Demo
{ 
    publc:
    int A,B;

    Demo(int i =10, int j =20)
    {
        A =i;
        B = j;
    }

};

Demo 


int main()
{
    Demo obj1(11,21);
    Demo obj2(51,151);
    Demo obj(0,0);

    obj = obj1 + obj2;

    return 0;
}