#include<iostream>
using namespace std;

const int A = 10;

int main()
{
    const int B = 20;  // if u create const varibale initiallize when u create 

    const int Arr[4] = { 10,20,30,40};

    

    /*   shows error not allowed 
        A = 11;
        A++;
        A--;
        B =21;
        B++;
        Arr[1] = 21;
        Arr[2]++;
    */
    cout<<"value of A"<<A<<endl;
    cout<<"value of B"<<B<<endl;
    cout<<"value of Arr"<<Arr[4]<<endl;    

    return 0;

}