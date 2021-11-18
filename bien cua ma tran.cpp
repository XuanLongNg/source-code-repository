#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		int a[1000];
		cin>>n;
		for(i=1;i<=n*n;i++)
		cin>>a[i];
		for(i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
		for(i=n+1;i<=n*n-n;i++)
		{
			if(i%n==0||i%n==1)
			cout<<a[i]<<" ";
			else cout<<" "<<" ";
			if(i%n==0) cout<<endl;
		}
		for(i=n*n-n+1;i<=n*n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
