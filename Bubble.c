#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[] = {1,3,5,2,12,45,67,89,123,45,678,900};
    int n;
    n = sizeof(arr)/sizeof(int);
    printf("The Array is = ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i<n-1; i++){
        bool swap = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1]; 
                swap = true;
            }
        }
        if(swap == false)
        break;
    }
    printf("\nThe increasing Array is = ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i<n-1; i++){
        bool swap = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if(swap == false)
        break;
    }
    printf("\nThe decreasing Array is = ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}