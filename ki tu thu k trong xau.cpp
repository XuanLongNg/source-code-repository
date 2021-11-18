#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a={""},b={""};
        long a1,b1;
        cin>>a1>>b1;
        char k;
        k='A';
        for(long i=0;i<a1;i++){
            a+=k;
            a+=b;
            reverse(a.begin(),a.end());
            a+=b;
            reverse(a.begin(),a.end());
            b=a;
            a.erase();
            k++;
        }
        cout<<b<<endl;
        cout<<b[b1-1]<<endl;
    }
}
