function selectionincreasing(arr,  n){ 
    var i, j, min_index; 
    for(i = 0; i < n-1; i++){  
        min_index = i; 
        for(j = i + 1; j < n; j++){ 
            if (arr[j] < arr[min_index]){
                min_index = j; 
            }
        }
        if( min_index != i){
            arr[min_index] = arr[min_index] + arr[i];
            arr[i] = arr[min_index] - arr[i];
            arr[min_index] = arr[min_index] - arr[i]; 
        } 
    }
}
function selectiondreasing(arr,  n){ 
    var i, j, min_index; 
    for(i = 0; i < n-1; i++){  
        min_index = i; 
        for(j = i + 1; j < n; j++){ 
            if (arr[j] > arr[min_index]){
                min_index = j; 
            }
        }
        if( min_index != i){
            arr[min_index] = arr[min_index] + arr[i];
            arr[i] = arr[min_index] - arr[i];
            arr[min_index] = arr[min_index] - arr[i]; 
        } 
    }
}  
function printarray( arr,  size){ 
    var i; 
    for(i = 0; i < size; i++){
        process .stdout.write(arr[i] + " "); 
    }
} 
var arr = [1,3,5,2,12,45,6,9,123,6,678,900]; 
    var n = arr.length; 
    selectionincreasing(arr, n); 
    console.log("The increasing array is = "); 
    printarray(arr, n); 
    console.log("\nThe decreasing array is = ");
    selectiondreasing(arr, n);
    printarray(arr, n);
  