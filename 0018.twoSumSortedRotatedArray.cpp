bool TwoSumSortedRotatedArray(vector<int>& arr, int target)
{
    // First find the start index if array is in ascending order
    int i;
    for (i = 0; i < arr.size()-1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            break;
        }
    }
    int low = i + 1;
    int high = i;
    while (low != high)
    {
        if (arr[low] + arr[high] == target)
            return true;

        if (arr[low] + arr[high] < target)
        {
            low = (low + 1) % arr.size();
        }
        else
        {
            high = (high - 1 + arr.size()) % arr.size();
        }
    }
    return false;
}

int main()
{
    vector<int> arr = { 11, 15, 6, 8, 9, 10 };
    int sum = 16;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (TwoSumSortedRotatedArray(arr, sum))
        cout << "Target found";
    else
        cout << "Target not found";

    return 0;
}
