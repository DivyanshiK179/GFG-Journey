class Solution {
  public:
    
    bool ispossible(vector<int> &arr,long long mid,int k)
    {
        int s=1;
        long long pages=0;
        for(int i=0;i<arr.size();i++)
        {
            if(pages+arr[i]>mid)
            {
                s++;
                pages=arr[i];
                if(s>k)
                {
                    return false;
                }
            }
            else
            {
                pages+=arr[i];
            }
        }
        return true;
    }
    
    int findPages(vector<int> &arr, int k) {
        if(k>arr.size())
        {
            return -1;
        }
        long long ans=-1;
        long long s=0;
        long long total=0;
        for(int i=0;i<arr.size();i++)
        {
            total+=arr[i];
            if(arr[i]>s)
            {
                s=arr[i];
            }
        }
        long long e=total;
        while(s<=e)
        {
            long long mid=s+(e-s)/2;
            if(ispossible(arr,mid,k))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};