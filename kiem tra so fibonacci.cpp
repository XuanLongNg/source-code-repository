#include<iostream>
#include<math.h>
using namespace std;
long long fibonacci(long long a){
	long long x0=0,x1=1,x2=1,i,h=0;
	if(a==0) return 1;
	else{
	for(i=0;x2<=a;i++)
	{
		x0=x1;
		x1=x2;
		x2=x0+x1;
		if(x2==a||x0==a||x1==a)
		{
			return 1;
			h++;
			break;
		}
	} 
	if(h==0) return 0;
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		cin>>a;
		if(fibonacci(a)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
