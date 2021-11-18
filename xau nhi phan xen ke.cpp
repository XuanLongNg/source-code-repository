#include<bits/stdc++.h>
using namespace std;
int main(){
    string k,h;
    k="";h="";
    int n;
    cin>>n;
    for(int i=0;i<n/2;i++){
        k+="0 1 ";
        h+="1 0 ";
    }
    for(int i=0;i<n%2;i++){
        k+="0";
        h+="1";
    }
    cout<<k<<endl;
    cout<<h;
    
}
