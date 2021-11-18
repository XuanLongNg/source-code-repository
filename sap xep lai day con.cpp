#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n];
		For(i,0,n){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int max,min;
		For(i,0,n){
			if(a[i]!=b[i]){
				min=i+1;
				break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				max=i+1;
				break;
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}
