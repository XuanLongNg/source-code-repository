#include<bits/stdc++.h>
using namespace std;
void Next_Bit_String(string b[1050],string a, int n,int j){ 
    int i=n-1-j;
    b[i]++;
    if(b[i]>1){
        b[i]=0;
        Next_Bit_String(b,n,j+1);
    }
    
}
void xuat(int *b,int n){
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
    cout<<" ";
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[100];
        for(int i=0;i<n;i++) b[i]=0;
        for(int i=0;i<pow(2,n);i++){
            xuat(b,n);
            Next_Bit_String(b,n,0);
        }
        cout<<endl;
    }
}
