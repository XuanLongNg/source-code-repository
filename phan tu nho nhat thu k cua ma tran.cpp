#include<bits/stdc++.h>
#define for(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,k,i=0,j=0;
        cin>>n>>k;
        vector <int> b;
        int g=n*n;
        for(i,g){
            int h;
            cin>>h;
            b.push_back(h);
        }
        sort(b.begin(),b.end());
        cout<<b[k-1];
        cout<<endl;
    }
}