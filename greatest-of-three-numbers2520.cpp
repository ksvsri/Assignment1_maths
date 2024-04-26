#include<bits/stdc++.h>
using namespace std;
int greatestOfThree(int A, int B, int C) {
        int max=INT_MIN;
        if(A>B)max=A;  //max is A if A is greater than B
        else max=B;
        if(max<C)max=C;  //max has greater if c is greater than max ,then max is c
        return max;
        // code here
    }
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<greatestOfThree(a,b,c);
	return 0;
}
