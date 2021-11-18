#include <bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(){
	ll n,sotien;
	cin>>n;
	n/=1000;
	cout<<9%50;
	For(i,0,n/10+1)
	For(j,0,(n-10*i)/20+1){
		sotien=n;
		sotien=sotien-(i*10+j*20);
		if(sotien%50==0)
		cout<<i<<" "<<j<<" "<<sotien/50<<endl;
	}
}
