#include<bits/stdc++.h>
using namespace std;
long long isSumPalindrome(long long n){
        for(int i=0;i<5;i++){
           long long rev=0;
           long long m=n;
           //reverse the n
           while(m!=0){
              rev=rev*10+m%10;
              m=m/10;
            }
            //checking before adding is palindrome or not
            if(rev==n)return n;
            n+=rev;     //addiing  reverse of n to n
            m=n;
            rev=0;
            //reverse again
            while(m!=0){
                rev=rev*10+m%10;
                m=m/10;
                
            }
            //checking palindrome or not
            if(rev==n)return n;
        
        }return -1;
        
        // code here
    }
int main(){
	long long n;
	cin>>n;
	cout<<isSumPalindrome(n);
	return 0;
}
