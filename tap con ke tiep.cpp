#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int stop=false;
int giaithua(int a){
    if(a==1) return 1;
    return giaithua(a-1)*a;
}
void Next_combination(int *X, int n,int k){
    int i = k-1;
    while (X[i] == n-k + i +1) i--;
    X[i] = X[i] + 1;
    for (int j= i+1; j < k; j ++)
    X[j] = X[i] + j - i ;
}
void xuat(int a[1000], int n){
    int i;
    f(i,n) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,k,h,r=0;
        cin>>n>>k;
        h=n;
        int a[1000],b[1000];
        f(i,k) cin>>a[i];
        f(i,k) b[k-i-1]=h--;
        f(i,k) if(a[i]!=b[i]) r=1;
        if(r==1)
        Next_combination(a,n,k);
        else f(i,k) a[i]=i+1;
        
        xuat(a,k);
        
    }
}
