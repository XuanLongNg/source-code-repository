#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,m,j;
		int a[100][100],b[100][100];
		cin>>n>>m;
		for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		cin>>a[i][j];
		for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			if(a[i][j]==1)
			{
				for(int k=1;k<=m;k++)
				b[i][k]=1;
				for(int k=1;k<=n;k++)
				b[k][j]=1;
			}
		}
		for(i=1;i<=n;i++)
		{
		for(j=1;j<=m;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
	    }
	}
}
