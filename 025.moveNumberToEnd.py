def moveToEnd(arr, num):
    i=0
    j =len(arr)-1
    while(i<j):
        while(i<j and arr[j] == num):
            j-=1
        if(arr[i]==num):
            arr[i], arr[j] = arr[j],arr[i]
        i+=1
    return arr
        
nums = [3,3,3,3,4,5,6]       
print(moveToEnd(nums,3))
