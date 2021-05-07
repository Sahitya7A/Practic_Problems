#include<stdio.h>
void main()
{
    int a[10]={1,3,4,5,6,89,2,42,15,19},i,j,temp;
    for(i=0;i<10;i++)
    {
        j=i;
        while(j>0)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
            else
            {
                break;
            }
            j--;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}
