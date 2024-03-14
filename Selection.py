def Selectionincreasing(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr

arr = [1,3,5,2,12,45,6,9,123,6,678,900]      
print("The array is = ")
print(arr)
print("The increasing array is = ")
print(Selectionincreasing(arr))    