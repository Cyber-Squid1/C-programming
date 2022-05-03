#include <stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
        }	
    }
	printf("Sorted array: \n");
	for (int i = 0; i < n; i++)
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
	bubbleSort(arr, n);
	return 0;
}
