/*Write a C program to merge two arrays. (Use dynamic array and functions )

case=1
Sample input:
Enter array1 & array2 sizes:4 3
Enter elements:5 2 7 1
Enter elements:6 3 9

Sample output:
Elements:1	2	3	5	6	7	9
*/

#include<stdio.h>
#include<stdlib.h>
int* create(int);
void sort(int*,int);
void display(int*,int);
int* merge(int*,int*,int,int);

void main()
{
    int i,j,n1,n2,*a,*b,*c;
    printf("Enter array1 & array2 sizes:");
    scanf("%d%d",&n1,&n2);
    printf("Enter array1 elements:");
    a=create(n1);
    printf("Enter array2 elements:");
    b=create(n2);
    sort(a,n1);
    sort(b,n2);
    c=merge(a,b,n1,n2);
    printf("Elements:");
    display(c,(n1+n2));

// code here
}

int* create(int size)
{
    int *arr,i;
    arr=(int*)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
    //code here
}

void sort(int *arr,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void display(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
    printf("%d\t",arr[i]);
    }
    //code here
}
int* merge(int *a,int *b,int n1,int n2)
{
    int i,j,k,*c;
    c=(int*)malloc((n1+n2)*sizeof(int));
    for(i=0,k=0,j=0;i<(n1+n2);i++)
    {
        if(a[k]<b[j])
        {
            c[i]=a[k];
            k++;
            if(k>=n1)
            {
                for(i++;j<n2;i++,j++)
                {
                    c[i]=b[j];
                }
            }
        }
        else
        {
            c[i]=b[j];
            j++;
            if(j>=n2)
            {
                for(i++;k<n1;i++,k++)
                {
                    c[i]=a[k];
                }
            }
        }
    }
    return c;
    //code here

}

