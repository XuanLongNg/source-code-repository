#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sohoanhao(ll n){
	ll i,k=0;
	for(i=2;i<=sqrt(n);i++){
		ll h=n;
		if(n%i==0){
			k+=i;
			k+=h/i;
		}
	}
	k+=1;
	if(k==n) return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<sohoanhao(n)<<endl;
	}
}
