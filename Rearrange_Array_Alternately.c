#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        int x;
        scanf("%d",&x);
        int a[x];
        for(int j=0;j<x;j++)
        {
            scanf("%d",&a[j]);
        }
        int m=x/2;
        if(x%2==0)
        {
            for(int j=0;j<x/2;j++)
            {
                if(j<m-1)
                {
                    printf("%d %d ",a[x-1-j],a[j]);
                }
                else
                {
                    printf("%d %d",a[x-1-j],a[j]);
                }
            }
        }
        else
        {
            for(int j=0;j<x/2;j++)
            {
                printf("%d %d ",a[x-1-j],a[j]);
            }
            printf("%d",a[m]);
        }
        printf("
");
    }
}