#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		long long k=0,m;
		cin>>a>>m;
		for(int i=1;i<=a;i++){
			k+=i%m;
		}
		if(k==m)
        cout<<"1"<<endl;
        else cout<<"0"<<endl;
	}
}
