#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

void Result(int a[1000],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void Try (int a[1000],int b[1000],int i ,int n,int k) {
    for (int j =0; j<n; j++){
        if (a[j]>b[i-1]) {
            b[i]=a[j];
            if ( i ==k-1)
            Result(b,k);
            else
            Try (a,b,i+1,n,k);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,i=0,r=0,k;
        cin>>n>>k;
        int a[1000],b[1000];
        f(i,n) cin>>a[i];
        sort(a,a+n);
        Try(a,b,i,n,k);
        
    }
    
}
