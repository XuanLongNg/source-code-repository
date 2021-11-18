#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define MAX 10
using namespace std;
int Bool[MAX] = { 0 };
void Result(int a[1000],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void Try (int a[1000],int b[1000],int i ,int n) {
    for (int j =0; j<n; j++){
        if (Bool[a[j]]!=1) {
            b[i]=a[j];
            Bool[a[j]]=1;
            if ( i ==n-1){
                Result(b,n);
            }
            else
            Try (a,b,i+1,n); 
            Bool[a[j]]=0;
        }
    }
}
int main(){
    int n,i=0,r=0;
    cin>>n;
    int a[1000],b[1000];
    f(i,n) cin>>a[i];
    sort(a,a+n);
    Try(a,b,i,n);
}
