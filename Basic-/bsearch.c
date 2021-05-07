/*Binary Search*/

#include<stdio.h>
int bsearch(int a[10],int n,int key)
{
    int first=0,last=n-1,mid,flag=0;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==key)
        {
            flag=45;
            break;
        }
        else if(a[mid]<key)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    if(flag==0)
    {
        printf("element not found");
    }
    else
    {
        printf("%d found at %d",key,mid+1);
    }
}
void main()
{
    int a[10],n,i,key;
    printf("enter n value\n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element to be searched");
    scanf("%d",&key);
    bsearch(a,n,key);
}
