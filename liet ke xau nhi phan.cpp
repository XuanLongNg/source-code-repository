#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void xuat(int a[],int n){
	For(i,0,n) cout<<a[i];
	cout<<" ";
}
void Try(int a[],int n,int i){
    For(j,0,2){
    	a[i]=j;
    	if(i==n-1){
    		xuat(a,n);
		}else Try(a,n,i+1);
	}	
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=0,a[2000000];
		cin>>n;
	    Try(a,n,i);
	    cout<<endl;
	}
}
