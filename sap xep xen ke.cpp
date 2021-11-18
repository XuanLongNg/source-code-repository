#include<bits/stdc++.h>
using namespace std;
void sapxep(int a[1000],int n){
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j])
			swap(a[i],a[j]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],b[1000];
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		sapxep(a,n);
		int k=1,l=2;
		for(int i=n;i>=n/2+1;i--){
		    b[k]=a[i];
		    k+=2;
	    }
	    for(int i=1;i<=n/2;i++){
		    b[l]=a[i];
		    l+=2;
	    }
		for(int i=1;i<=n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
