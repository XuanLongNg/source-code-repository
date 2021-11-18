#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        long long b,n,k=0;
        cin>>a>>b>>n;    
        for(int i=0;i<a.size();i++){
            k=(k*10+(a[i]-'0'))%n;  
        }
        b%=n-1;
        long long m=1;
        while(b--){
            m=m*k%n;
        }
        cout<<m<<endl;
    }
	

}
