#include<bits/stdc++.h>
using namespace std;
 int nthTermOfAP(int a1, int a2, int n) {
        return (a2-a1)*(n-1)+(a1);
        
        // code here
    }
int main(){
	int a1,a2,n;
	cin>>a1>>a2>>n;
	cout<<nthTermOfAP(a1,a2,n);
	return 0;
}
