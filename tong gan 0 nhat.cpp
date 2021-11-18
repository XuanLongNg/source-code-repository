#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j,m;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		long k=abs(a[0]+a[1]);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++){
				if(abs(a[i]+a[j])<abs(k)){
					k=a[i]+a[j];
				}
			}
		}
		cout<<k<<endl;
	}
}

