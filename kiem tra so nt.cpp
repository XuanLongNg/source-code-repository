#include<iostream>
#include<math.h>
using namespace std;
long sont(long n){
	if(n<2) return 0;
	else
	{
	    for(long i=2;i<=sqrt(n);i++)
	        if(n%i==0) return 0;
	        return 1;
	}
}
int main(){
	long a;
	cin>>a;
	if(sont(a)==1) cout<<"YES";
	else cout<<"NO";
}

