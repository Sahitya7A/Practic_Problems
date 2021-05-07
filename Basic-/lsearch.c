#include<stdio.h>
int lsearch(int a[10],int n,int key)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=97;
            break;
        }
    }
    if(flag==0)
        printf("element not found");
    else
        printf("%d found at %d index",key,i);
}
void main()
{
    int a[10],n,i,key;
    printf("enter n value\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter element to be searched\n");
    scanf("%d",&key);
    lsearch(a,n,key);
}
