#include<stdio.h>
int main()
{
    int n,i,A[25],j,temp;                                                    //variable declaration
    printf("Enter the limit\t");
    scanf("%d",&n);                                                          //reading the size of the array
    for(i=0;i<n;i++)                                                         //reading the elements into the array
    {
        printf("Add the elements to the array\t");
        scanf("%d",&A[i]);                   
    }
    printf("\nEntered Array is\n");                                          //displaying the array (unsorted)
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n\nPerforming BUBBLE SORT\n");
    for(i=0;i<n;i++)                                                         //loop conditions for performing bubble sort
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];                                                   //swapping 
                A[j]=A[j+1]; 
                A[j+1]=temp;
            }
        }
    }
    printf("\nRESULT\n");                                                    //displaying the sorted array
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}