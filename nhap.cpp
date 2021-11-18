#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
long long lcm(long long a,long long b){
	return a*b/gcd(a,b);
} 
int main(){
	int t;cin>>t;
	while(t--){
		long long x,y,z,n; cin>>x>>y>>z>>n;
		long long boi_chung=lcm(x,lcm(y,z));
		if(boi_chung>(long long)pow(10,n-1)){
			long long tmp=boi_chung/(long long)pow(10,n-1);
			if(tmp<10) cout<<boi_chung;
			else cout<<-1;
		}
		else{
			cout<<((long long)pow(10,n-1)+boi_chung-1)/boi_chung*boi_chung;
		}
		cout<<endl;
	}
}