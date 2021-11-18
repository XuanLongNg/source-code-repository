#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int stop=false;
int giaithua(int a){
    if(a==1) return 1;
    return giaithua(a-1)*a;
}
void Next_Bit_String(int b[1000],int n){
    int i=n-1;
    while(b[i]==0 && i>0){
        b[i]=1;
        i--;
    }
    if(i==0&&b[i]==0) stop=true;
    else b[i]=0;
}
void xuat(int a[1000], int n){
    int i;
    f(i,n) cout<<a[i];
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        int i,h=0;
        cin>>n;
        int a[1000],b[1000];
        while(h!=n.size()){
            a[h]=n[h]-'0';
            h++;
        }
        Next_Bit_String(a,h);
        xuat(a,h);
    }
}
