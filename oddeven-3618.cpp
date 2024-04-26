#include<bits/stdc++.h>
using namespace std;
 string oddEven(int N){
        if(N%2==0)return "even";
        return "odd";
        // code here 
    }
int main()
{
	int n;
	cin>>n;
	cout<<oddEven(n);
	return 0;
}
