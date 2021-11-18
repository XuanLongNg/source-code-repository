#include<bits/stdc++.h>
#define for(i,n,m) for(long i=n;i<m;i++)
using namespace std;
void quaymatran(long n,long m,long a[100][100],long b[100][100]){
    long x=n/2,y=m/2;
    long i,j;
    for(i,0,n)
        for(j,0,m){
        int h=m-1-j,g=n-1-i;
        if(i==x&&j==y) b[i][j]=a[i][j];
        if(j<=y)
            if(i>=0+j&&i<=n-2-j) b[i][j]=a[i+1][j];
        if(j>=y)  
            if(i>=1+h&&i<=n-1-h) b[i][j]=a[i-1][j];
        if(i<=x)
            if(j>=1+i&&j<=m-1-i) b[i][j]=a[i][j-1];
        if(i>=x) 
            if(j>=0+g&&j<=m-2-g) b[i][j]=a[i][j+1];
        }  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m,i=0,j=0;
		long a[100][100],b[100][100];
        cin>>n>>m;
        for(i,0,n)
        for(j,0,m)
        cin>>a[i][j];
        quaymatran(n,m,a,b);
        for(i,0,n)
        for(j,0,m) cout<<b[i][j]<<" ";
        cout<<endl;
    }
}
