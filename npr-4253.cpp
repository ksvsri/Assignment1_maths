#include<bits/stdc++.h>
using namespace std;
long long nPr(int n, int r){
        long long  nfact=1,nrfact=1;
       for(int i=1;i<=n;i++){
           nfact=nfact*i;
       }
        for(int i=1;i<=(n-r);i++){
           nrfact=nrfact*i;
       }
       return nfact/nrfact;
        // code here
    }
int main(){
	int n,r;
	cin>>n>>r;
	cout<<nPr(n,r);
	return 0;
}
