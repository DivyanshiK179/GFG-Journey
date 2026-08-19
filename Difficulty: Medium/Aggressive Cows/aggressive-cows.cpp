class Solution {
    bool ispossible(vector<int> &arr,int mid,int k)
    {
        int cow=1;
        int pos=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-pos>=mid)
            {
                cow++;
                pos=arr[i];
            }
            if(cow==k)
            {
                return true;
            }
        }
        return false;
    }
    
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int ans=-1;
        int s=1;
        int n=arr.size();
        int e=arr[n-1]-arr[0];
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(ispossible(arr,mid,k))
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
        
    }
};