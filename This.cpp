#include<iostream>

using namespace std;
 
 class Demo
 {
       public:
        int No1; //characterstics of class 
        int No2; //characterstics of class 


    
        void Fun (int A, int B) 
        {
            cout<<"Inside Fun "<<this->No1<<"\n";
            cout<<"Inside Fun "<<this->No2<<"\n";

           
        }

        void Gun(int A)  
        {
          
        }
        
 };  //class close 




int main()
{

    Demo obj1; 
    Demo obj2;
    
    obj1.Fun(11,21);    //Fun(&obj1, 11, 21);
    obj2.Gun(51);   //Gun(&obj2,11);
    

    return 0;
}

//Every C++ programs gets internally converted into C program.