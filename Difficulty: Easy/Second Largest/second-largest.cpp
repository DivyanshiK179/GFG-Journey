class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max1)
            {
                max1=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max2 && arr[i]!=max1)
            {
                max2=arr[i];            
            }
        }
        if(max2!=INT_MIN)
        {
            return max2;
        }
        else
        {
            return -1;
        }
    }
};