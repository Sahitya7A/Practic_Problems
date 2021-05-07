#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*p,j,temp;
    printf("enter size");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((*(p+i))<(*(p+j)))
            {
                temp =(*(p+i));
                (*(p+i))=(*(p+j));
                (*(p+j))= temp;
            }
        }
    }
    printf("second largest is %d\n",(*(p+1)));
}
