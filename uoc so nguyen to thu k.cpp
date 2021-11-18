#include<iostream>
#include<math.h>
using namespace std;
int sont(int n){
	if(n<2) return 0;
	else
	{
	    for(int i=2;i<=sqrt(n);i++)
	        if(n%i==0) return 0;
	        return 1;
	}
}
int tim_uoc(int n,int m)
{
	if(sont(n)==1){
	if(m>1) return -1;
	else return n;
	}
	else{
		int k=0;
		int b,i=2;
		while(i<=sqrt(n))
		{
			while(n%i==0)
			{
				k++;
				n/=i;
				if(k==m) break;
			}
			if(k==m){
			    b=i;
				break;
			}
			if(i%2==0) i++;
			else i+=2;
		}
		if(k==m)
		return b;
		else{
			if(n>1)
			if(k+1==m) return n;
			else return -1;
			else return -1;
	    }
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<tim_uoc(a,b)<<endl;
	}
}
