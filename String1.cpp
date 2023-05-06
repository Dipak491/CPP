#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch = 'D';

    char Name1[6] = {'H','e','l','l','o','\0'};

    char Name2[] = {'H','e','l','l','o','\0'};

    char Name3[] = "Hello";

    cout<<sizeof(Name1)<<"\n";
    cout<<sizeof(Name2)<<"\n";
    cout<<sizeof(Name3)<<"\n";

    cout<<strlen(Name1)<<"\n";
    cout<<strlen(Name2)<<"\n";
    cout<<strlen(Name3)<<"\n";

    cout<<Name1<<"\n";


    return 0;
}