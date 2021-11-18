#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n],max=1;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		if(a[i]>max)
		max=a[i];
		cout<<max<<endl;
	}
}
