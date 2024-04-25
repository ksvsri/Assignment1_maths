#include<bits/stdc++.h>
using namespace std;
long long int reverse_digit(long long int n)
	{
		long long int  rev=0;
		while(n!=0){
		    rev=rev*10+n%10;
		    n=n/10;
	    }
		return rev;
}
int main(){
	long long int n;
	cin>>n;
	cout<<reverse_digit(n);
	return 0;
}
