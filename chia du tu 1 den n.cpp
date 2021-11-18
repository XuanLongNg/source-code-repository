#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m;
		long long k=0;
		cin>>a>>m;
		for(int i=1;i<=a;i++){
			k+=i%m;
		}
        cout<<k<<endl;
	}
}
