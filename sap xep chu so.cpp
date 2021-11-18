#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,j;
		long long b[10]={0,1,2,3,4,5,6,7,8,9},c[10]={0,1,2,3,4,5,6,7,8,9};
		cin>>n;
		long long a;
		for(i=1;i<=n;i++){
		    cin>>a;
		    while(a){
        		int k=a%10;
        		a/=10;
        		for(j=0;j<=9;j++)
        		if(b[j]==k) c[j]=-1;
			}
		}
		for(i=0;i<=9;i++){
			if(c[i]==-1)
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
