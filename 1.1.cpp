#include<bits/stdc++.h>

#define Mod 1000000007
using namespace std;
long long mody(long long a,long long b,long long c){
	if(b==0) return 0;
	long long tmp=mody(a,b/2,c);
	if(b%2==1){
		return (a%c+2*(tmp%c))%c;
	}
	else{
		return (2*(tmp%c))%c;
	}
} 
long long kq(long long a,long long b,long long c){
	if(b==0) return 1;
	else{
		if(b%2==0) return mody(kq(a,b/2,c),kq(a,b/2,c),c);
		else return mody(a,mody(kq(a,b/2,c),kq(a,b/2,c),c),c);
	}
}
void xu_ly(string s,long long b,long long m){
	reverse(s.begin(),s.end());
	long long mod=0;
	long long x=1;
	for(int i=0;i<s.length();i++){
		x%=m;
		mod+=(int)(s[i]-'0')*x;
		x*=10;
	}
	mod%=m;
	cout<<kq(mod,b,m)<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		string a; cin>>a;
		long long b,m; cin>>b>>m;
		xu_ly(a,b,m);
	}
}


