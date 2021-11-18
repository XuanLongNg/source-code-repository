#include<bits/stdc++.h>
using namespace std;
void sapxep(long a[100000], long n){
	for(long i=1;i<n;i++){
		for(long j=i+1;j<=n;j++)
		if(a[i]>a[j]) swap(a[i],a[j]);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j,m;
		cin>>n>>m;
		for(i=1;i<=n;i++)
		cin>>a[i];
		sapxep(a,n);
		for(i=n;i>=n-m+1;i--)
		cout<<a[i]<<" ";
		cout<<endl;
	}
}
