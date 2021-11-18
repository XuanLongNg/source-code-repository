#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,n,a[2000];
        cin>>n>>x;
        for(int i=n-1;i>=0;i--){
            cin>>a[i];
        }
        int k=0;
        for(int i=n-1;i>=0;i--){
            k+=a[i]*pow(x,i);
        }
        cout<<k;
    }
}
