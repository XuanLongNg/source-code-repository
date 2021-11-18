#include<bits/stdc++.h>
#define f(i,n,m) for(long i=n;i<m;i++)
using namespace std;
void xoanmatran(long a[100][100],int n, int m){
    vector<long>b;
    long h=0;
    int i=0,j=0,a1=m-1,a2=n-1,a3=0,a4=1;
    while(h<=n*m){
        while(j<=a1){
            b.push_back(a[i][j++]);
        } a1--;
        while(i<=a2){
            b.push_back(a[i++][j]);
        } a2--;
        while(j>=a3){
            b.push_back(a[i][j--]);
        } a3++;
        while(i>=a4){
            b.push_back(a[i--][j]);
        } a4++;
    }
    for(long i=b.begin;i!=b.end;i++) cout<<b[i]<<" ";
}
int main(){
	int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long a[100][100];
        f(i,0,n)
        f(j,0,m) cin>>a[i][j];
        xoanmatran(a,n,m);
        cout<<endl;
    }
}

