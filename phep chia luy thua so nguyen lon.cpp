#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        ll b,n,k=0,l=0;
        cin>>a>>b>>n;    
        for(int i=0;i<a.size();i++){
            k=(k*10+(a[i]-'0'))%n;  
        }
        b%=n-1;
        ll ret=1;
        while (b > 0) 
        {
            if (b % 2 > 0) 
            ret = ret * k % n;
            k = k * k % n;  
            b /= 2;

        }
        cout<<ret<<endl;
    }
	

}
