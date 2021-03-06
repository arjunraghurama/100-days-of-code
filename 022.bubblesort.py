def bubble_sort(arr):
    isSorted = False
    counter =0
    while not isSorted:
        isSorted = True
        for i in range(len(arr)-1-counter):
            if(arr[i]>arr[i+1]):
                arr[i], arr[i+1] = arr[i+1], arr[i]
                isSorted = False

    return arr

unsorted = [2,55,42,68,41,1,0,8,99]
print(bubble_sort(unsorted))
