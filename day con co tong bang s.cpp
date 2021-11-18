#include<bits/stdc++.h>
using namespace std;

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
