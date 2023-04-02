#include<iostream>

using namespace std;
 
 class Arithmatic
 {
    private:  
        int No1; //characterstics of class 
        int No2; //characterstics of class 

    public:
        Arithmatic()    // behaviour of class constructor should be public 
        {
            No1 = 0;
            No2 = 0;
        }
        Arithmatic(int A, int B) //// behaviour of class (functions)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()  // behaviour of class  (method)
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
        
        int Substraction()  // behaviour of class 
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }

 };  //class close 




int main()
{

    Arithmatic obj1(10,7); // Crate object  go to line 17 (compiler search two parameter constructor)
    Arithmatic obj2;      // go to line 12 (compliler search a function in class which is default constructor)

    int Ret = 0; //local variable for main

    Ret = obj1.Addition();  //obj1 is caller object 
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj1.Substraction();
    cout<<"Substraction is:"<<Ret<<"\n";
     

      Ret = obj2.Addition();  //obj1 is caller object 
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj2.Substraction();
    cout<<"Substraction is:"<<Ret<<"\n";

    cout<<"Value of No1:"<<obj1.No1;

    return 0;
}