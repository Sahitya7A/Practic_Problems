#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("enter size\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Reading an displaying array elements using DMA\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
        printf("%d\t",*(ptr+i));
    }
}
