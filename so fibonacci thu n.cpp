#include<iostream>
#include<math.h>
using namespace std;
long long fibonacci(int a){
	long long x0=0,x1=1,x2=1,i;
	for(i=0;i<=a-3;i++)
	{
		x0=x1;
		x1=x2;
		x2=x0+x1;
	}
	return x2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		cin>>a;
		if(a==0) cout<<"0"<<endl;
		else
		cout<<fibonacci(a)<<endl;
	}
}
