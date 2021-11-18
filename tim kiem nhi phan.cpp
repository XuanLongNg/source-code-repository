#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,m,i,r;
		cin>>n>>m;
		long a[n];
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<=n;i++)
		if(m==a[i]){
			r=1;
			break;
		}else r=-1;
		cout<<r<<endl;
	}
}
