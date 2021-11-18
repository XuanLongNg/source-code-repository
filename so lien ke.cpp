#include<iostream>
#include<math.h>
using namespace std;
int kiemtra(long long a){
	int m,n;
	int p=1;
	while(a)
	{
		m=a%10;
		a/=10;
		n=a%10;
		if(abs(m-n)!=1)
		{
			p=0;
			break;
		}else p=1;
		if(a<10) break;
	}
	return p;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		cin>>a;
		if(kiemtra(a)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
