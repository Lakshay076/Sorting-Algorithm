function Bubble(arr){
    for(let i = 0; i < arr.length - 1; i++) {
        let swap = false;
        for(let j = 0; j < arr.length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
                swap = true;
            }
        }
        if (!swap){
            return;
        }
    }
}

let arr = [1,3,5,2,12,45,6,9,123,6,678,900];
Bubble(arr);
console.log("The increasing array is = ");
for(let i = 0; i < arr.length; i++){
    process.stdout.write(arr[i] + " ");
}