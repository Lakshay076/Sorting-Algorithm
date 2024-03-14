#include<iostream>
using namespace std;

void bubbleSortincreasing(int arr[], int n){
    int i, j;
    bool swap;
    for (i = 0; i < n - 1; i++) {
        bool swap = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                swap = true;
            }
        }
        if (swap == false)
            break;
    }
}
void bubbleSortdecreasing(int arr[], int n){
    int i, j;
    bool swap;
    for (i = 0; i < n - 1; i++) {
        bool swap = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                swap = true;
            }
        }
        if (swap == false)
            break;
    }
}
void print(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
int main(){
    int arr[] = {1,3,5,2,12,45,6,9,123,6,678,900};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The array is = ";
    print(arr, n);
    bubbleSortincreasing(arr, n);
    cout << "\nThe increasing array is = ";
    print(arr, n);
    bubbleSortdecreasing(arr, n);
    cout << "\nThe decreasing array is = ";
    print(arr, n);
    return 0;
}
