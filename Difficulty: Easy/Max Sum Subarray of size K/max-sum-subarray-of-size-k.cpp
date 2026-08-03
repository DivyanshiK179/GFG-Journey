class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int i=0;
        int j=0;
        int maxx=0;
        int summ=0;
        while(j<arr.size())
        {
            summ+=arr[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if((j-i+1)==k)
            {
                maxx=max(maxx,summ);
                summ-=arr[i];
                i++;
                j++;
            }
        }
        return maxx;
    }
};