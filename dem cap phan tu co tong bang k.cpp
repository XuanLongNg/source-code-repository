#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,a[1000];
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		int m=0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(a[i]+a[j]==k)
				m++;
			}
		}
		cout<<m<<endl;
	}
}
