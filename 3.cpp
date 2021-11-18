#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int n,h=0,a[1000];
    cin>>n;
	while(n){
        a[h++]=n%10;
        n/=10;
    }
    f(i,h) cout<<a[i];
}

