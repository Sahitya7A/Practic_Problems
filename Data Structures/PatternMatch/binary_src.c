
/* Program to search an element in the array using Binary search Technique
Example:
Enter array size:5
Enter elements:4 8 2 6 1
Enter number to search:6
6 is found at location 4*/
#include<stdio.h>
void search(int,int);
int arr[20];
void main()
{
    int n,i,j,a,temp;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to search:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
 /*   for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }*/
   search(n,a);
}
void search(int n,int a)
{
    int i,first,last,mid;
    int c=0;
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==a)
        {
            c=1;
            break;
        }
        else if(a < arr[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    if(c==0)
    {
        printf("Element not found");
    }
    else
    {
        printf("%d is found at location %d",a,mid+1);
    }
}
