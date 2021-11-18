#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool comp(int i,int j){
	return i>j;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n],b[100000],k=0;
		For(i,0,n){
			cin>>a[i]; 
			b[a[i]]=abs(m-a[i]);
			if(a[i]>k) k=a[i];
		}
		sort(b,b+k,comp);
		For(i,0,n){
			if(b[a[i]]!=0)
			cout<<a[i]<<" ";
		}
	}
}
