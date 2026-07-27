class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                return false;
            }
        }
        return true;
    }
};