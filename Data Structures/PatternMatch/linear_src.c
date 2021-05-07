/* Program to search an element in the array using Linear search Technique
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
    int n,i,a;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to search:");
    scanf("%d",&a);
    search(n,a);
}
void search(int n,int a)
{
    int i;
    int c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("%d is found at location %d",a,i+1);
    }
}
