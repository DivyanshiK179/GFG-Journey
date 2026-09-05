class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int prefix_sum=0;
        int total=0;
        for(int i=0;i<arr.size();i++)
        {
            total+=arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            if(total-prefix_sum-arr[i]==prefix_sum)
            {
                return i;
            }
            prefix_sum+=arr[i];  
        }
        return -1;
    }
};