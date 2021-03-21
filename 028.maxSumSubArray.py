
def max_sum_subarray(arr):
    max_sum_at_ith_index = [0 for _ in range(len(arr))]

    max_sum_at_ith_index[0] = arr[0]

    for i in range(1,len(arr)):
        curr_element = arr[i]
        max_untill_i = max_sum_at_ith_index[i-1]
        max_sum_at_ith_index[i] = max( max_untill_i+curr_element,curr_element)

    return max(max_sum_at_ith_index)

arr = [-2, -3, 4, -1, -2, 1, 5, -3]   
print(max_sum_subarray(arr)) 
