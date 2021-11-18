#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void bien_doi(int a[],int b[],int n){
	b[0]=a[0]*a[1];
	b[n-1]=a[n-1]*a[n-2];
	For(i,1,n-1){
		b[i]=a[i-1]*a[i+1];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n;
		int a[n],b[n];
		For(i,0,n) cin>>a[i]; 
		bien_doi(a,b,n);
		For(i,0,n) cout<<b[i]<<" ";
		cout<<endl;
	}
}
