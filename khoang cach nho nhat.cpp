#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		int k=10000;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			{
				if(a[i]-a[j]<k&&i!=j&&a[i]-a[j]>=0)
				k=a[i]-a[j];
			}
		}
		cout<<k<<endl;
	}
}
