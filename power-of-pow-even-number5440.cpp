#include<bits/stdc++.h>
using namespace std;
	long long int sum_of_square_evenNumbers(long long int n)
		{
		    return (2*n*(n+1)*(2*n+1))/3;
		    // Code hrere
		}
	int main(){
		long long int n;
		cin>>n;
		cout<<sum_of_square_evenNumbers(n);
		return 0;
	}
