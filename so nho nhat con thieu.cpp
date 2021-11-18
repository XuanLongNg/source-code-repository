#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j;
		cin>>n;
		for(i=1;i<=n-1;i++)
		cin>>a[i];
		int m=0;
		for(i=1;i<=n;i++){
			if(a[i+1]-a[i]==2){
			    m=a[i+1]-1;
				break;
			}
		}
		cout<<m<<endl;
	}
}

