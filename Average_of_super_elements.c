#include<stdio.h>
int main()
{
    int n,i,j;
    float res=0,sum=0,count=0;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int t=0,x=a[i];
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
        if(t==x)
        {
            sum+=a[i];
            count++;
            a[i]=0;
        }
    }
    if(count==0)
    {
        printf("%d",-1);
    }
    else
    {
        res=sum/count;
        printf("%.2f",res);
    }
    
}