#include<iostream>
using namespace std;
int tinhtong(int a)
{
	int k=0;
	while(a){
		k+=a%10;
		a/=10;
	}
	a=k;
	return a;
}
int main(){
	int n,i;
	long a[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		while(a[i]>=10){
			a[i]=tinhtong(a[i]);
		}
		cout<<a[i]<<endl;
	}
}
