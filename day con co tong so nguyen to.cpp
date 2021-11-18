#include<bits/stdc++.h>
#define MAX 20
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int Bool[MAX] = { 0 };
int sont(int a){
	int i;
	if(a<2) return 0;
	int k=0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0) return 0;
	}
    return 1;
}
void Result(int a[1000],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
long sum(int a[1000], int n){
    long k;
    for(int i=0;i<n;i++)
    k+=a[i];
    return k;
}
void Try(int a[1000],int n,long k){
    for(int i=n-1;i>=0;i++){
        b[n-i-1]=a[i];
        if()
    }
}

bool comp(const int a, const int b){
   return a > b;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,i=0,r=0,k=0;
        cin>>n;
        int a[1000];
        f(i,n) cin>>a[i];
        k=sum(a,n);
        sort(a,a+n,comp);
        Try(a,b,i,n,k);
        
    }
}
