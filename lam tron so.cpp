#include<bits/stdc++.h>
using namespace std;
int dem(long a){
    long k=a,m=0;
    while(k){
        m++;
        k/=10;
    }
    return m;
}
void lam_tron(long &n){
    long k=1,nho=0,h=dem(n);
    for(int i=1;i<h;i++){
        if((n+nho)%10>=5) nho=1;
        else nho=0;
        n/=10;
    }
    k=(n%10+nho)*pow(10,h-1);

    n=k;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       long n;
       cin>>n;
       lam_tron(n);
       cout<<n<<endl;
    }	
}
