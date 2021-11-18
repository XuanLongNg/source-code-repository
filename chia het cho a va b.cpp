#include<iostream>
#include<math.h>
using namespace std;
void chia_het_cho_a_va_b(long a,long b,long m,long n,long &k){
	for(int long i=m;i<=n;i++)
	{
		if(i%a==0&&i%b==0)
		k++;
		else if(i%a==0) k++;
		else if(i%b==0) k++;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long m,n,a,b;
		cin>>m>>n>>a>>b;
		long k=0;
	    chia_het_cho_a_va_b(a,b,m,n,k);
		cout<<k<<endl;
	}
}
