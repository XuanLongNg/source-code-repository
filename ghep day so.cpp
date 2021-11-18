#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[10][1000],b[10000];
		int n,k,m=0;
		cin>>n>>k;
		for(int i=0;i<k;i++)
		for(int j=0;j<n;j++)
		{
		cin>>a[i][j];
		b[m]=a[i][j];
		m++;
	    }
	    for(int i=0;i<m-1;i++)
	    for(int j=i+1;j<m;j++)
	    if(b[i]>b[j]){
		swap(b[i],b[j]);
	    }
		for(int i=0;i<m;i++)
		cout<<b[i]<<" ";
		cout<<endl;
	}
}

