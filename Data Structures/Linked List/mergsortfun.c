/* Write a C program to merge two arrays.
Write sort function to sort the array elements

case=1
Sample input:
Enter size of two arrays:3 4
Enter elements of first array:2 4 1
Enter elements of second array:6 5 7 8 3

Sample output:
Elements:1	2	4	5	6	7	8


#include <stdio.h>
void sort(int [],int);
void main()
{
        int a[10],b[10],c[20],n1,n2,i,j,k,temp;

    printf("Enter size of two arrays:");
    scanf("%d%d",&n1,&n2);
    printf("Enter elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
printf("Enter elements of second array:");
   for(i=0;i<n2;i++)
   {
       scanf("%d",&b[i]);
   }
    sort(a,n1);
    sort(b,n2);
    for(i=0,k=0,j=0;i<n1+n2;i++)
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
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\t",c[i]);
    }
    //write code here
}

void sort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
             if(arr[j]>arr[j])
                {
                    temp=arr[j];
                    arr[j]=arr[j];
                    arr[j]=temp;
                }
        }
    }
}*/
/* Write a C program to merge two arrays.
Write sort function to sort the array elements

case=1
Sample input:
Enter size of two arrays:3 4
Enter elements of first array:2 4 1
Enter elements of second array:6 5 7 8 3

Sample output:
Elements:1	2	4	5	6	7	8

*/
#include <stdio.h>
void sort(int [],int);
void main()
{
        int a[10],b[10],c[20],n1,n2,i,j,k,temp;

    printf("Enter size of two arrays:");
    scanf("%d%d",&n1,&n2);
    printf("Enter elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
printf("Enter elements of second array:");
   for(i=0;i<n2;i++)
   {
       scanf("%d",&b[i]);
   }
    sort(a,n1);
    sort(b,n2);
    for(i=0,k=0,j=0;i<n1+n2;i++)
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
    printf("Elements:");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\t",c[i]);
    }
    //write code here
}

void sort(int arr[],int size)
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

