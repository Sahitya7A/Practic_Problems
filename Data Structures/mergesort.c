/* Write a C Program to Implement Merge Sort

Example:
Enter the number of elements in the Array 5
Enter the Elements of an array 30 20 40 10 50
Array after Merge Sort:
10      20      30      40      50


*/
#include<stdio.h>

void merge_sort(int arr[], int,int);
void merge(int arr[], int, int, int);

int main() {
int arr[10],i,n;
  printf("Enter the number of elements in the Array ");
  scanf("%d",&n);
  printf("Enter the Elements of an array ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  merge_sort(arr,0,n-1);

  printf("Array after Merge Sort:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }

}

void merge_sort(int arr[], int beg,int end)
{
    int mid;
  if(beg<end)
  {
      mid=(beg+end)/2;
      merge_sort(arr,beg,mid);
      merge_sort(arr,mid+1,end);

  merge(arr,beg,mid,end);
}
}
void merge(int arr[], int beg, int mid, int end)
{int temp[10];
  int i=beg,j=mid+1,index=beg,k;
  while(i<=mid && j<=end)
  {
      if(arr[i]<arr[j])
      {
          temp[index]=arr[i];
          i++;
          index++;
      }
      else
      {
          temp[index]=arr[j];
          j++;
          index++;
      }
  }
  if(i>mid)
  {
      while(j<=end)
      {
          temp[index]=arr[j];
          j++;
          index++;
      }
  }
  else
  {
      while(i<=mid)
      {
          temp[index]=arr[i];
          i++;
          index++;
      }
  }
    for(k=beg;k<index;k++)
    {
        arr[k]=temp[k];
     //   index++;
    }
}
