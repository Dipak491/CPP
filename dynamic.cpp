#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Demo
{



};


int main()
{
    int arr[5];  //static memory allocation 

    int *p = NULL;
    p = (int *) malloc(5 * sizeof(int)); // dymanic memory allocation

    int *q = NULL;
    q = (int *)calloc(5 * sizeof(int));   //dynamic memory 

    int *X =NULL;
    X = new int[5];


    return 0;
}