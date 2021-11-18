#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j,m;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		long k=-1;
		for(i=1;i<=n-1;i++)
		{
			for(j=i-1;j>=0;j--){
				if(a[i]==a[j]){
				    k=a[i];
				    break;
				}
			}
			if(k!=-1) break;
		}
		cout<<k<<endl;
	}
}
