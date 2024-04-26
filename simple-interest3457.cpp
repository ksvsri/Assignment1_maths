#include<bits/stdc++.h>
using namespace std;
double simpleInterest(int P, int R, int T) {
        double intr=double(P*T*R)/100;
        return intr;
        // code here
    }
int main(){
	int p,r,t;
	cin>>p>>r>>t;
	cout<<simpleInterest(p,r,t);
	return 0;
}
