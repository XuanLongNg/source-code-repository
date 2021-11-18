#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n+m];
		For(i,0,n+m) cin>>a[i]; 
		sort(a,a+n+m);
		For(i,0,n+m)
		cout<<a[i]<<" ";
		cout<<endl;
	}
}
