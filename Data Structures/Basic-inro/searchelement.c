#include<stdio.h>
void main()
{
    int a[10],i,n,sea,key=0;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("reading array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&sea);
    for(i=0;i<n;i++)
    {
        if(a[i]==sea)
        {
           key=1;
        }
       /*else
        {
            printf("element not found");
        }*/
    }
    if(key=1)
        printf("element found\n");
    else
        printf("element not found\n");

}
