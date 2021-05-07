#include<stdio.h>
void main()
{
    int a[5]={2,5,6,7,1},i,min,pos=1;
    min=a[0];
    for(i=1;i<=5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            pos=i+1;
            //printf("Smallest element is in position of %d\n",i);
        }
    }
    printf("Smallest element is: %d\t",min);
    printf("%d",pos);
}
