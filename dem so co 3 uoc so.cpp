#include<iostream>
#include<math.h>
using namespace std;
long sont(long n){
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
		long long a,i;
		cin>>a;
		int h=0;
		for(i=1;i<=sqrt(a);i++)
		{
			if(sont(i)==1) h++;
		}
		cout<<h<<endl;
	}
}
