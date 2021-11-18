#include<iostream>
using namespace std;
long giaithua(long a){
	if(a==1) return 1;
	return a*giaithua(a-1);
}
int main(){
	long n;
	cin>>n;
	long k=0;
	for(long i=1;i<=n;i++)
	{
		k+=giaithua(i);
	}
	cout<<k;
}
