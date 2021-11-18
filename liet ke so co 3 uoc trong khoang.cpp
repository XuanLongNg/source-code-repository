#include<iostream>
#include<math.h>
using namespace std;
long long sont(long long n){
	if(n<2) return 0;
	else
	{
	    for(int i=2;i<=sqrt(n);i++)
	        if(n%i==0) return 0;
	        return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long a,i,b;
		cin>>a>>b;
		int h=0;
		if(a>b){
			long long k=a;
			a=b;
			b=k;
		}
		for(i=sqrt(a);i<=sqrt(b);i++)
		{
			if(sont(i)==1) h++;
		}
		cout<<h<<endl;
	}
}
