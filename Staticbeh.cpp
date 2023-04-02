#include<iostream>
using namespace std;


class Demo
{
    public:
    int A, B;            //Non static  characteristic 
    static int X, Y;    //static characteristics 

    Demo()              //default constructor 
    {
            //initialisation of non staic characteristics 
        A = 0;
        B = 0;
    }

    void fun()      //void fun(Demo *this)
    {
        cout<<"Inside non static function fun:"<<"\n";
        cout<<"Value of A:"<<this->A<<"\n";
        cout<<"Value of B:"<<this->B<<"\n";
        cout<<"value of X :"<<X<<"\n";
        cout<<"Value of Y :"<<Y<<"\n";
        
    }

    static void gun() //static void gun() 
    {
        cout<<"Inside static function gun"<<"\n";
         cout<<"value of X :"<<X<<"\n";
         cout<<"Value of Y :"<<Y<<"\n";
    }
};
//initalisation of static characteristic 
int Demo :: X = 10; // :: scope resoluation
int Demo :: Y = 20;

int main()
{
    Demo::gun();    //directly if data static no need to create object 
    Demo obj;

    obj.fun(); //fun(&obj);
    obj.gun();   //avoid this type of call use line 42 
    
    return 0;
}
