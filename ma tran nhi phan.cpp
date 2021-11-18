#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	long a[n][3];
	for(i=0;i<n;i++)
	for(j=0;j<3;j++)
	cin>>a[i][j];
	int g=0;
	for(i=0;i<n;i++)
	{
		int k=0;
		for(j=0;j<3;j++)
		{  
			if(a[i][j]==1) k++;
		}
		if(k>=2) g++;
	}
	cout<<g;
}
