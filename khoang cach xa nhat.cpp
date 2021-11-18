#include<bits/stdc++.h>
using namespace std;
void tinh(long *a,long n,long &k){
	for(long i=n-1;i>=1;i--){
		for(long j=0;(j+i)<n;j++)
		if(a[j]<=a[j+i]){
			k=i;
			break;
		}
	    if(k!=0) break;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long *a;
		a=new long[n];
		for(long i=0;i<n;i++)
		cin>>a[i];
		long k=0;
		tinh(a,n,k);
		cout<<k<<endl;
	}
}
