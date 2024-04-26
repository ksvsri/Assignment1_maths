#include<bits/stdc++.h>
using namespace std;
 vector<int> getTable(int N)
    {
        vector<int>table;
        for(int i=1;i<=10;i++){
            table.push_back(N*i);
        }return table;
        // Write Your Code here
    }
int main(){
	int n;
	cin>>n;
	vector<int>table;
	table=getTable(n);
	for(int i=0;i<10;i++){
		cout<<table[i]<<" ";
	}
	return 0;
}
