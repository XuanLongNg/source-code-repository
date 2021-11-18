#include<bits/stdc++.h>
using namespace std;
int congmatran(int a[100][100],int b[100][100], int i,int j,int g,int h,int m){
	if(g==m) return a[i][m]*b[m][j];
	return a[i][h]*b[g][j]+congmatran(a,b,i,j,g+1,h+1,m);
}
int main(){
	int n,m,p,i,j,a[100][100],b[100][100];
	cin>>n>>m>>p;
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	cin>>a[i][j];
	for(i=1;i<=m;i++)
	for(j=1;j<=p;j++)
	cin>>b[i][j];
	for(i=1;i<=n;i++){
		for(j=1;j<=p;j++){
			int g=1,h=1;
			cout<<congmatran(a,b,i,j,g,h,m)<<" ";
		}
		cout<<endl;
	}
	
}

