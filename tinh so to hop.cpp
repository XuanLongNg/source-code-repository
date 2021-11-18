#include <bits/stdc++.h>
#define ld long double
#define ll long long
#define Mod 1000000007
using namespace std;
void ToHop(ll a,float r){
	lb tu=1,mau=1;
	ll h=1;
	if(r>(float)a/2) r=a-r;
	for(int i=1;i<=r;i++){
	   	tu=(a-r+i);
	   	mau=i;
		h*=(tu/mau);
	   	h%=Mod;
	}	   	
	cout<<h;
}
int main(){
    ll a;
	float r; 
	cin>>a>>r;
	ToHop(a,r);
}
