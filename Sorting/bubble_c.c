#include<stdio.h>
int main()
{
    int n,a[1001],i,j,temp;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)             // total n-1 passes
    {
        for(j=0;j<n-i-1;j++)      // generally, j=1 to n-i
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}