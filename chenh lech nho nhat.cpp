#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long i,n,j;
		cin>>n;
		long a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		long k=10000;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					k=0;
					break;
				}else if(abs(a[i]-a[j])<k) k=abs(a[i]-a[j]);
				else if(k==1) break;
			}
			if(k==0) break;
		}
		cout<<k<<endl;
	}
}
