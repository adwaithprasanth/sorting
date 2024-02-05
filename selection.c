#include<stdio.h>
int main()
{
    int n,i,a[25],pos,j,temp;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
                pos=j;
            }
        }
        if(i!=pos)
        {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}