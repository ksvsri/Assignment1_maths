#include<bits/stdc++.h>
using namespace std;
 string armstrongNumber(int n){
        int sum=0,m=n;
        while(m!=0){
            sum+=pow((m%10),3);
            m=m/10;
        }if(sum==n)return "Yes";
        return "No";
       
    }
 int main(){
 	int n;
 	cin>>n;
 	cout<<armstrongNumber(n);
 	return 0;
 }
