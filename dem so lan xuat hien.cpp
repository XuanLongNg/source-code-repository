#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j,m,k=0;
		cin>>n>>m;
		map<int,int>s;
		for(i=1;i<=n;i++){
			cin>>a[i];
			s[a[i]]++;
		}
		if(s[m]!=0)
		cout<<s[m]<<endl;
		else cout<<"-1"<<endl;
	}
}
