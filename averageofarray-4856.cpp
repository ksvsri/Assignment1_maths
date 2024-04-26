#include<bits/stdc++.h>
using namespace std;
	vector<float> streamAvg(int arr[], int n) {
	    vector<float>res;
	    float sum=0.0;
	    for(int i=0;i<n;i++){
	        sum+=float(arr[i]);
	        res.push_back(sum/(i+1));
	    }
	    return res;
	    // code here
	}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<float>res;
	res=streamAvg(a,n);
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	return 0;
	
}
