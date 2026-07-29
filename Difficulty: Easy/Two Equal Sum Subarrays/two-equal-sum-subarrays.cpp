#include<numeric>

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int total = std::accumulate(arr.begin(),arr.end(),0);
        int prefix=0;
        int remaining=0;
        
        if (arr.size() < 2) {
            return false;
        }
        
        for(int i=0;i<=arr.size()-2;i++) 
        {
            prefix+=arr[i];
            remaining=total-prefix;
            if(remaining==prefix)
            {
                return true;
            }
        }
        return false;
    }
};
