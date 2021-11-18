#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n],b[n];
		map<int,int> hop;
		For(i,0,n){
			cin>>a[i];
			hop[a[i]]++;
		}
		For(i,0,m){
			cin>>b[i];
			hop[b[i]]++;
		}
		map<int,int>::iterator it;
		for(it=hop.begin();it!=hop.end();it++){
			cout<<it->first<<" ";
		}
		cout<<endl;
		for(it=hop.begin();it!=hop.end();it++){
			if(it->second>=2)
			cout<<it->first<<" ";
		}
		cout<<endl;
	}
}
