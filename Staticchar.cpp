#include<iostream>
using namespace std;


class Demo
{
    public:
    int A, B;            //Non static 
    static int X, Y;    //static character 

    Demo()              //default constructor 
    {
            //initialisation of non staic characteristics 
        A = 0;
        B = 0;
    };
};
//initalisation of static characteristic 
int Demo :: X = 10; // :: scope resoluation
int Demo :: Y = 20;

int main()
{

    cout<<"Value of X :"<<Demo:: X<<"\n";
    cout<<"Value of Y :"<<Demo:: Y<<"\n";



    Demo obj1;
    cout<<"Value of A:"<<obj1.A<<"\n";
    obj1.A++;

    cout<<"Value of A:"<<obj1.A<<"\n";


    cout<<"size of demo class object is :"<<sizeof(obj1)<<"\n";
    return 0;
}
