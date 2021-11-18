#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long i,n,k=0;
		cin>>n;
		long long a;
		for(i=1;i<=n;i++)
		{
		    cin>>a;
		    if(a!=0) cout<<a<<" ";
		    else k++;
		}
		for(i=1;i<=k;i++)
		cout<<"0 ";
		cout<<endl;
	}
	return 0;
}
