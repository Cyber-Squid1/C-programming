#include <stdio.h>
void insertionSort(int arr[], int n){
    int eleatright,j;
    for(int i=1;i<n;++i){
        eleatright=arr[i];
        j=i;
        while(arr[j-1]>eleatright && j>=1){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=eleatright;
    }
    printf("Sorted array: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

int main(){
    int n=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array: ");
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
	return 0;
}
