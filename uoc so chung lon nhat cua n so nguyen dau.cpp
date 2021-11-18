#include<iostream>
#include<math.h>
using namespace std;
long long ucln(long long a,long long b){
	if(b==0) return a;
	else return ucln(b,a%b);
}
long long bcnn(long long a,long long b){
	return a*b/ucln(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long a;
		cin>>a;
		long long s=1;
		for(long long i=1;i<=a;i++){
			s=bcnn(s,i);
		}
		cout<<s<<endl;
	}
}
