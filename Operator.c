#include<stdio.h>

int main()
{
    int x = 0;
    
    printf("Enter the number\n");
    scanf("%d",&x);

    if(x%2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd number");
    }
    

    return 0;
}