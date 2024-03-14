#include<stdio.h>

void sortincreasing(int arr[], int n){
    int i, j, min_index;
    for(int i = 0; i<n-1; i++){
        min_index = i;
        for(int j = i + 1; j<n; j++){
            if( arr[j] < arr[min_index])
            min_index = j;
        }
        if( min_index != i){
            arr[min_index] = arr[min_index] + arr[i];
            arr[i] = arr[min_index] - arr[i];
            arr[min_index] = arr[min_index] - arr[i]; 
        }
    }
}
void sortdecreasing(int arr[], int n){
    int i, j, min_index;
    for(int i = 0; i<n-1; i++){
        min_index = i;
        for(int j = i + 1; j<n; j++){
            if( arr[j] > arr[min_index])
            min_index = j;
        }
        if( min_index != i){
            arr[min_index] = arr[min_index] + arr[i];
            arr[i] = arr[min_index] - arr[i];
            arr[min_index] = arr[min_index] - arr[i]; 
        }
    }
}
void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1,3,5,2,12,45,6,9,123,6,678,900};
    int n = sizeof(arr)/sizeof(int);
    printf("The array is = ");
    printarray(arr, n);
    sortincreasing(arr, n);
    printf("The increasing array is = ");
    printarray(arr, n);
    sortdecreasing(arr, n);
    printf("The decreasing array is = ");
    printarray(arr, n);
    return 0;
}