#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        long long n,k=0;
        cin>>a>>n;     
        for(int i=0;i<a.size();i++){
            k=(k*10+(a[i]-'0'))%n;
            cout<<k<<endl;  
        }
        cout<<k<<endl;
    }
	

}
