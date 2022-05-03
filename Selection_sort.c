#include <stdio.h>
  
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
  
void selectionSort(int arr[], int n)
{
    int i, j, minindex;
    for (i = 0; i < n-1; i++)
    {
        minindex = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[minindex])
            minindex = j;
        swap(&arr[minindex], &arr[i]);
    }
    printf("Sorted array: \n");
    for(int i=0;i<n;++i)
        printf("%d ", arr[i]);
}

int main()
{
    int n=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
	int arr[n];
    printf("Enter elements of the array: ");
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    selectionSort(arr, n);
    return 0;
}