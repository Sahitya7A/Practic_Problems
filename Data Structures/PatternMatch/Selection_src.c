/*Write a 'C' program on Selection sort

sample input
Enter number of elements:5
Enter 5 integers:6 3 4 2 8
Sorted list in ascending order:
2 3 4 6 8
*/
#include <stdio.h>

int main()
{
  int n,i,j,a[20],temp;
  printf("Enter number of elements:");
  scanf("%d",&n);
  printf("Enter %d integers:",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(a[i] < a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
  }
  printf("Sorted list in ascending order:\n");
  for(i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }

  return 0;
}
