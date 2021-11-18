#include<iostream>
using namespace std;
void sapxep(long b[10000], int m){
	for(int i=0;i<m-1;i++)
	for(int j=i+1;j<m;j++)
	if(b[i]>b[j]){
		swap(b[i],b[j]);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long a[10000];
		long n,k,m=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		cin>>a[i];
	    sapxep(a,n);//e có thể dùng sort của algorithm nhưng sợ không đúng yêu cầu
	    cout<<a[k-1];
		cout<<endl;
	}
}

