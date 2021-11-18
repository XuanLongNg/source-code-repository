#include <bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void xuat(int i,int j,int sotien){
	cout<<i<<" "<<j<<" "<<sotien/50<<endl;
}
void Try(int n,int i,int a,int b,int sotien){
	sotien-=a*i;
	for(int j=0;j<=(n-a*i)/b;j++){
		sotien-=b*j;
		if(sotien%50==0){
			xuat(i,j,sotien/50);
		}else if(sotien<0) Try(n,i+1,a,b,sotien);
		 
	}
}
int main(){
	ll n,sotien;
	cin>>n;
	n/=1000;
	Try(n,0,10,20,sotien);
}
