#include<bits/stdc++.h>
using namespace std;
int oppositeFaceOfDice(int N)
    {
    	//sum of oppiste faces is 7 
        return 7-N;
    }
int main(){
	int n;
	cin>>n;
	cout<<oppositeFaceOfDice(n);
	return 0;
}
