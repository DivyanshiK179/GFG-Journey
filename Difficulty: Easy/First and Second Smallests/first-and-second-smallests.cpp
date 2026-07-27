class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<min1)
            {
                min1=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<min2 && arr[i]!=min1)
            {
                min2=arr[i];            
            }
        }
        if(min1!=INT_MAX && min2!=INT_MAX)
        {
            return {min1,min2};
        }
        else
        {
            return {-1};
        }
    }
};