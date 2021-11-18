#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j,m;
		cin>>n>>m;
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<=n;i++){
			if(a[i]==m){
			    cout<<i<<endl;
				break;
			}
		}
	}
}

