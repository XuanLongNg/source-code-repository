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
		int k=1;
		while(k<=n*n){
			int p=k/n;
			if(p%2!=1)
			for(i=0;i<n;i++)
			{
				cout<<a[k]<<" ";
				k++;
			}
			else{
			for(i=n-1;i>=0;i--){
				cout<<a[k+i]<<" ";
			}
			k+=n;
		    }
		}
		cout<<endl;
	}
}
