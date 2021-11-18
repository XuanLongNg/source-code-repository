#include<bits/stdc++.h>
using namespace std;
long tim_Max(long a[1000],long n){
	long k=a[1];
	for(long i=1;i<=n;i++){
		if(a[i]>k) k=a[i];
	}
	return k;
}
long tim_Min(long a[1000],long n){
	long k=a[1];
	for(long i=1;i<=n;i++){
		if(a[i]<k) k=a[i];
	}
	return k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,m,i;
		cin>>n>>m;
		long a[100000],b[100000];
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<=m;i++)
		cin>>b[i];
		long long u;
		u=tim_Max(a,n)*tim_Min(b,m);
		cout<<u<<endl;
	}
}
