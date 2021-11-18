#include<iostream>
using namespace std;
int tach(long long n){
	int k=0;
	int a[1000];
	for(int i=1;n;i++)
	{
		a[i]=n%10;
		n/=10;
		k++;
	}
	int t=0;
	for(int i=1;i<=k/2;i++)
	{
		if(a[i]!=a[k-i+1])
		{
			t=1;
			break;
		}else t=0;
	}
	return t;
}
int main(){
	int n,i;
	long long a[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	if(tach(a[i])==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
