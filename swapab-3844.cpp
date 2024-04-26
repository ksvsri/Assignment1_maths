#include<bits/stdc++.h>
using namespace std;
 pair<int, int> get(int a, int b){
        pair<int,int>p;
        p.first=b;
        p.second=a;
        return p;
        //complete the function here
    }
int main(){
	int a,b;
	cin>>a>>b;
	pair<int,int>p;
	p=get(a,b);
	cout<<p.first<<" "<<p.second;
	return 0;
}
