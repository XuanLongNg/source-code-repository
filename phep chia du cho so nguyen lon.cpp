#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        long long b;
        cin>>a>>b;
        int j=0,h;
        for(int i=0;i<a.size();i++){
            h=a[i]-48;
            j=(j*10+h)%b;
        }
        cout<<j<<endl;
    }
}