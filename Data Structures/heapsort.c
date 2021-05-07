z/* Write a C Program to Implement Heap Sort

Example:
Enter array size 5
Enter elements of the array 30 20 40 10 50
Array elements after Heap sort:
10      20      30      40      50

*/
#include<stdio.h>
    int temp;

    void heapify(int arr[], int size, int i)
    {
        int largest=i;
        int left=2*i + 1;
        int right=2*i + 2;
        if(left<size && arr[left]>arr[largest])
        {
            largest=left;
        }
        if(right<size && arr[right]>arr[largest])
        {
            largest=right;
        }
        if(largest!=i)
        {
            temp=arr[i];
            arr[i]=arr[largest];
            arr[largest]=temp;
            heapify(arr,size,largest);
        }
    }

    void heapSort(int arr[], int size)
    {
        int i;
        for(i=size/2-1;i>=0;i--)
        {
            heapify(arr,size,i);
        }
        for(i=size-1;i>=0;i--)
        {
            temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
            heapify(arr,i,0);
        }
    }

    void main()
    {
    int i,n;
	printf("Enter array size ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array ");
    for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
    int size = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, size);
    printf("Array elements after Heap sort:\n");
    for (i=0; i<size; ++i)
    printf("%d\t",arr[i]);
    }
