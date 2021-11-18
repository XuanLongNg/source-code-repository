#include<bits/stdc++.h>
using namespace std;
long tim_max(long a[100000],long n){
	int max=a[0];
	for(int i=1;i<=n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[100000],n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<tim_max(a,n);
        cout<<endl;
	}
}
