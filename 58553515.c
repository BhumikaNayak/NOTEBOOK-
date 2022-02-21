#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int Pages;
        scanf("%d\n",&Pages);
        printf("%d\n",10*Pages);
    }
    return 0;
}