#include<bits/stdc++.h>
using namespace std;
long long sumOfSeries(int n){
	//using direct formula O(1,1)
	
	long long res=(1LL*n*(n+1))/2;
	return res;
	
	
	/*using recursion stack space is O(N,N)

	if(n==1)return 1;
	return n+sumOfSeries(n-1);
	
	
	using dynamic programming O(N,N)
    
	long long dp[n+1];
    dp[1]=1;
    for(int i=2;i<=n;i++){
    	dp[i]=dp[i-1]+i;
    	
	}return dp[n];
	*/
}
int main()
{
	int n;
	cin>>n;
    long long p=sumOfSeries(n);
    cout<<p;
	return 0;
	
}

