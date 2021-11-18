#include<bits/stdc++.h>
using namespace std;
long dem(long a[100000], long n){
	long i,j,k=0;
	for(i=0;i<n-1;i++){
		int r=0;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]&&a[i]!=-1&&a[j]!=-1){
				k++;
				a[j]=-1;
				r=1;
			}
		}
		if(r==1) k++;
	}
	return k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000];
		long n,i;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		cout<<dem(a,n)<<endl;
	}
}
