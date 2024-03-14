import java.io.*; 
public class Selection{ 
    void sort(int arr[]) { 
        int n = arr.length; 
        for (int i = 0; i<n-1; i++){ 
            int min_index = i; 
            for (int j = i+1; j < n; j++){ 
                if (arr[j] < arr[min_index]) 
                    min_index = j;
            }
            if( min_index != i){
                arr[min_index] = arr[min_index] + arr[i];
                arr[i] = arr[min_index] - arr[i];
                arr[min_index] = arr[min_index] - arr[i]; 
            }                   
        } 
    }   
    void printarray(int arr[]){ 
        int n = arr.length; 
        for (int i=0; i<n; ++i) 
            System.out.print(arr[i]+" "); 
        System.out.println(); 
    } 
  
    public static void main(String args[]){ 
        Selection A = new Selection(); 
        int arr[] = {1,3,5,2,12,45,6,9,123,6,678,900}; 
        A.sort(arr); 
        System.out.println("The array is = "); 
        A.printarray(arr); 
    } 
} 