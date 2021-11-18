#include<bits/stdc++.h>
using namespace std;
void xoanmatran(long a[100][100],int n, int m){
    vector<long>b;
    long h=0;
    int i=0,j=-1,a1=m-1,a2=n-1,a3=0,a4=1;
    while(h<n*m){
        while(j<a1){
            if(h==n*m) break;
            b.push_back(a[i][++j]);
            ++h;
        } --a1;
        while(i<a2){
            if(h==n*m) break;
            b.push_back(a[++i][j]);
            ++h;
        } --a2;
        while(j>a3){
            if(h==n*m) break;
            b.push_back(a[i][--j]);
            ++h;
        } ++a3;
        while(i>a4){
            if(h==n*m) break;
            b.push_back(a[--i][j]);
            ++h;
        } ++a4;
    }
    for(long i=0;i<b.size();i++) cout<<b[i]<<" ";
}
int main(){
	int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long a[100][100];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
        xoanmatran(a,n,m);
        cout<<endl;
    }
}
