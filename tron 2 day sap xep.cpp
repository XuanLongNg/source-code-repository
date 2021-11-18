#include<bits/stdc++.h>
using namespace std;
void sapxep(long a[100000],long n){
	long i,j;
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j])
			swap(a[i],a[j]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,m,i,k,j;
		cin>>n>>m;
		long a[100000],b[100000],c[100000];
		for(i=1;i<=n;i++){
		cin>>a[i];
		c[i]=a[i];
	    }
	    k=n;
		for(i=1;i<=m;i++){
		cin>>b[i];
		c[i+k]=b[i];
	    }
	    sapxep(c,n+m);
	    for(i=1;i<=m+n;i++)
		cout<<c[i]<<" ";
		cout<<endl;
	}
}
