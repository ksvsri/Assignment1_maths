#include<bits/stdc++.h>
using namespace std;
int isDigitSumPalindrome(int n) {
        int sum=0;
        int m=n;
        //finding sum
        while(m!=0){      
            sum+=m%10;
            m=m/10;
        }
        int rev=0;
        m=sum;
        //revese the sum
        while(m!=0){
            rev=rev*10+m%10;
            m=m/10;
        }
        if(rev==sum)return 1; //returns 1 if palindrome
        return 0;             //returns 0 if palindrome 
        
    }
int main()
{
	int n;
	cin>>n;
	cout<<isDigitSumPalindrome(n);
	return 0;
}
