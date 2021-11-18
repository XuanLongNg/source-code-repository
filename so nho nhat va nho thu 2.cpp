#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j,m;
		cin>>n;
		for(i=1;i<=n;i++)
		cin>>a[i];
		sort(a,a+n);
		if(a[1]<a[2]) 
		cout<<a[1]<<" "<<a[2]<<endl;
		else cout<<"-1 "<<endl;
	}
}

