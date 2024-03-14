def bubbleincreasing(arr):
    for i in range(len(arr) - 1):
        swap = False
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j+1]:
                arr[j+1], arr[j] = arr[j], arr[j+1]
                swap = True
        if not swap:
            return arr
    return arr

def bubbledecreasing(arr):
    for i in range(len(arr) - 1):
        swap = False
        for j in range(len(arr) - i - 1):
            if arr[j] < arr[j+1]:
                arr[j+1], arr[j] = arr[j], arr[j+1]
                swap = True
        if not swap:
            return arr
    return arr

arr = [1,3,5,2,12,45,6,9,123,6,678,900]    
print("The array is = ")
print(arr)
print("The increasing array is = ")
print(bubbleincreasing(arr))
print("The decreasing array is = ")
print(bubbledecreasing(arr))

