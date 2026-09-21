class Solution {
    void solve(int n, string s, vector<string> &res, int zero, int one)
    {
        if(s.length()==n)
        {
            res.push_back(s);
            return;
        }
        solve(n,s+"1",res,zero,one+1);
        if(one>zero)
        {
            solve(n,s+"0",res,zero+1,one);
        }
    }
  public:
    vector<string> nBitBinary(int n) {
        vector<string> res;
        solve(n,"",res,0,0);
        return res;
    }
};