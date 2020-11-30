

void countFrequency(vector<int> &nums)
{
  int n  = nums.size();
  
  for (int i=0;i<n ;++i)
  {
    nums[i]-=1;
  }
  
  for(int i=0;i<n ;++i)
  {
    nums[nums[i]%n]+=n;
  }
  
   for(int i=0;i<n ;++i)
   {
    cout<<(i+1) << " -> "<< nums[i]/n<<endl
    nums[i] = (nums[i]%n) + 1;
   }
  
}
