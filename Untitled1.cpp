#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n][n];
		set<int> s[n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				s[i].insert(a[i][j]);
			}
		}
		map<int,int> m;
		for(int i=0;i<n;i++){
			for(int x:s[i]){
				m[x]++;
			}
		}
		int cnt=0;
		for(auto x:m){
			if(x.second==n) ++cnt;
		}
		cout<<cnt<<endl;
	}
}
