#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,k,sum=0;
		cin>>n>>k;
		long *a;
		a=new long [n];
		for(long i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
        if(a[0]<k/2){
        	for(long i=n-1;a[i]>=k/2;i--)
		    for(long j=0;a[j]<k/2;j++)
		    if(a[i]+a[j]>=k){
			    sum+=i-j;
			    break;
		    }
		}
		else sum+=n;
		cout<<sum<<endl;
	}
}
