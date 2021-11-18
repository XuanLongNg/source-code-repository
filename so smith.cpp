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
int tong(int b)
{
	int k=0,a=b;
	while(a){
		k+=a%10;
		a/=10;
	}
	return k;
}
int timuoc(int b)
{
	int i=2,a=b,k=0,x[1000],l=1;
	while(i<=sqrt(a))
	{
		while(a%i==0)
		{
			x[l]=i;
			l++;
			a/=i;
		}
		if(i%2==0) i++;
		else i+=2;
	}
	if(a>1) x[l]=a;
	for(i=1;i<=l;i++){
		k+=tong(x[i]);
		x[i]=0;
	}
	return k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		if(sont(a)==0&&timuoc(a)==tong(a))
		cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
