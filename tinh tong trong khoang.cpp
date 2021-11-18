#include<bits/stdc++.h>
using namespace std;
void tinhtong(int b,int c,int &k,int a[1000]){
	for(int j=b;j<=c;j++)
	k+=a[j];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],b[1000],c[1000];
		int n,q;
		cin>>n>>q;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=q;i++) cin>>b[i]>>c[i];
		for(int i=1;i<=q;i++){
			int k=0;
			tinhtong(b[i],c[i],k,a);
			cout<<k<<endl;
		}
	}
}
