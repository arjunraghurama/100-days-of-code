def sort(arr):

    low = 0
    high = len(arr) -1

    while(low<high):

        while(arr[low] == 0 and low<high):
            low+=1
        
        while(arr[high] ==1 and low<high):
            high -=1
        
        if(low < high):
            arr[low], arr[high] = arr[high] , arr[low]
            low+=1
            high-=1

    return arr



print(sort([0, 1, 0, 1, 1, 1,0,0,]))  
