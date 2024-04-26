#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
        while(b!=0){
            int t=b;
            b=a%b;
            a=t;
        }return a;
        // code here
    }
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}
