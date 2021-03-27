def move(arr):
    left=0
    right =0

    while right<len(arr):
        if arr[right]>0:
            arr[left], arr[right] = arr[right], arr[left]
            left+=1
            right+=1
        else:
            right+=1
    return arr

print(move([0, 0, 1, 2, 3, 0,0,0]))
