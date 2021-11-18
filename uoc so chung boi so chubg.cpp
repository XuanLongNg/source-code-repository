#include<iostream>
using namespace std;
int uoc(long int a,long int b)
{
	if (b == 0) return a;
    return (long int)uoc(b, a % b);
}
int boi(long int a,long int b)
{
	return (long int)(a*b)/uoc(a,b);
}
int main(){
	long int n,a[1000],i,b[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i]>>b[i];
	for(i=1;i<=n;i++)
	cout<<boi(a[i],b[i])<<" "<<uoc(a[i],b[i])<<endl;
	return 0;
}
