#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n,i,j;
		cin>>n;
		for(i=1;i<=n;i++)
		cin>>a[i];
		long min=a[1]+a[2],max=0;
		for(i=1;i<=n;i++){
			if(a[i]>max) max=a[i];
			if(a[i]<min) min=a[i];
		}
		int m=0;
		for(i=min;i<=max;i++){
			int k=0;
			for(j=1;j<=n;j++)
			if(a[j]==i)
			{
				k=1;
				break;	
			}
			if(k==0) m++;
		}
		cout<<m<<endl;
	}
}
