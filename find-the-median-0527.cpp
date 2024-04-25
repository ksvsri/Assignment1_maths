#include<bits/stdc++.h>
using namespace std;
int find_median(vector<int> v)
		{
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if((n%2)!=0)
		    return v[n/2];
		    return (v[n/2]+v[n/2-1])/2;
		    // Code here.
		    
		}
int main(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<find_median(v);
	return  0;
}
