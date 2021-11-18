#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n;
		int a[n];
		For(i,0,n) cin>>a[i]; 
		For(i,0,n){
			if(a[i]==a[i+1]){
				a[i]*=2;
				a[i+1]=0;
			}
		}
		For(i,0,n)
		if(a[i]!=0) cout<<a[i]<<" ";
		For(i,0,n)
		if(a[i]==0)
		cout<<a[i]<<" ";
		cout<<endl;
	}
}
