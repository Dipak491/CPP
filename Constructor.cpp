#include<iostream>

using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo() //default constructor 
        {
            cout<<"Inside default constructor\n";
            No1 = 0; 
            No2 = 10;
        }

        Demo(int A, int B)
        {
            cout<<"Inside paraameterzied \n";
            No1 = A;
            No2 = B;
        }

        Demo(Demo &ref) //copy constrcutr[]
        {
            cout<<"Inside copy constructor\n";
            No1 = ref.No1;
            No2. =ref.No2;
        }


        ~Demo() //Destructor 
        {
            cout<<"Inside Destructor\n";
        }

    void fun()
    {
        cout<<"Inside fun\n";
    }
    void gun()
    {
        cout<<"Inside Gun\n";
    }

};

int main()
{

    cout<<"Inside main\n";

    Demo obj1;

    cout<<"Value of no1 from obj1 is : "<<obj1.No1<<"\n";
    cout<<"Value of no2 from obj1 is :"<<obj1.No2<<"\n";

    Demo obj2(11,21);

     cout<<"Value of no1 from obj1 is : "<<obj2.No1<<"\n";
    cout<<"Value of no2 from obj1 is :"<<obj2.No2<<"\n";

    Demo obj3(OBJ2)
    {
        
    }


}


