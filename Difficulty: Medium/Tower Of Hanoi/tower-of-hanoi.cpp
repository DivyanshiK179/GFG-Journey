class Solution {
	void solve(int n, int source, int helper, int dest, int &count)
	{
		if(n==1)
		{
		    count++;
			return;
		}
		solve(n-1, source, dest, helper, count);
		count++;
		solve(n-1, helper, source, dest, count);
	}
	public:
	int towerOfHanoi(int n, int from, int to, int aux) {
		int count=0;
		solve(n, from, aux, to, count);
		return count;
	}
};
