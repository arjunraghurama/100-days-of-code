def merge_sort(arr,num_elements):

    if num_elements < 2:
        return

    mid = num_elements//2 
    left_arr = arr[:mid]
    right_arr = arr[mid:]

    merge_sort(left_arr, len(left_arr))
    merge_sort(right_arr, len(right_arr))

    i=j=k=0
    while( i < len(left_arr) and j < len(right_arr)):
        if(left_arr[i] < right_arr[j]):
            arr[k] = (left_arr[i])
            i+=1
        else:
            arr[k] = (right_arr[j])
            j+=1
        k+=1

    while(i<len(left_arr)):
        arr[k]= (left_arr[i])
        i+=1
        k+=1
    while(j<len(right_arr)):
        arr[k]= (right_arr[j])
        j+=1
        k+=1
    
    print(arr)


l = [6,2,3,1,9,10,15,13,12,17]
merge_sort(l,len(l))
