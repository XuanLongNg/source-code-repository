#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m,k=0;
		cin>>a>>m;
		for(int i=1;i<=m;i++){
			if((a*i)%m==1){
				cout<<i<<endl;
				break;
			}else{
				k++;
			}
		}
		if(k==m) cout<<"-1"<<endl;
	}
}
