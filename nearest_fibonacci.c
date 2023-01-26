#include<stdio.h>
int main()
{
    int n1=0,n2=1,next=0,number;
    scanf("%d",&number);
    while(number>next)
    {
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    if(number-n1<n2-number)
    {
        printf("%d",n1);
    }
    else if(number-n1==n2-number)
    {
        printf("%d %d",n1,n2);
    }
    else
    {
        printf("%d",n2);
    }
}