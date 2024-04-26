#include<bits/stdc++.h>
using namespace std;
int findNthTerm(int N) {
        return (N*(N+1))/2;
        // code here
    }
int main(){
	int n;
	cin>>n;
	cout<<findNthTerm(n);
	return 0;
}
