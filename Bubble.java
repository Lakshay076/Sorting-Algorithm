public class Bubble{
    public static void bubble_sort(int[] a){
        int n = a.length;
        for(int i = 0; i < n - 1; i++){
            boolean flag = false;
            for(int j = 0; j < n - i - 1 ; j++){ 
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    flag = true;
                }
            }
            if(flag == false){
                return;
            }
        }

    }
    public static void main(String[] args) {
        int[] arr = {1,3,5,2,12,45,6,9,123,6,678,900};
        bubble_sort(arr);
        System.out.print("The increasing array is = ");
        for(int i = 0; i < arr.length; i ++){
            System.out.print(arr[i] + " ");
        }
    }
}

