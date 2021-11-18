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
long long tim_uoc(long long n)
{
	long long k=1;
	if(sont(n)==1) return n;
	else
	{
		long long i=2;
		while(i<=sqrt(n))
		{
		    while(n%i==0)
		    {
			k=i;
			n/=i;
	        }
	        if(i%2==0) i++;
	        else i+=2;
	    }
	    if(n>1) return n;
	    else
	    return k;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long a;
		cin>>a;
		cout<<tim_uoc(a)<<endl;
	}
}
