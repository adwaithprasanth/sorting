#include<stdio.h>
int main()
{
    int n,i,A[25],j,temp;                                                   
    printf("Enter the limit");
    scanf("%d",&n);                                                          
    for(i=0;i<n;i++)                                                         
    {
        printf("Add the elements to the array");
        scanf("%d",&A[i]);                   
    }
    for(i=0;i<n;i++)                                                         
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];                                                    
                A[j]=A[j+1]; 
                A[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}