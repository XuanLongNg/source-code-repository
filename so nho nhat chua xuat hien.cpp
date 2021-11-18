#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int i=0,m=1;
		while(i<n){
			if(m==a[i]) m++;
			i++;
		}
		cout<<m<<endl;
	}
}
