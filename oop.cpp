
//class is characteristic and behaviour 
//class is data and function

#include<iostream>

using namespace std;

class Demo
{
    public: //anyone access it 
        int No1;    //4bytes
        int No2;    //4bytes

        void fun()
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2;

    cout<<"The size of Demo obj"<< sizeof(Demo)"\n";

    obj1.No1 =10;
    obj2.No2 = 20;

    obj2.No1 = 30;  // . 
    obj2.No2 = 40;

   obj1.fun();

    return 0;
}