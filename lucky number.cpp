#include<iostream>
using namespace std;
int main(){
	int n,i;
	long a[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		if(a[i]%100==86) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
