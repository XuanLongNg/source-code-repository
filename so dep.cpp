#include<bits/stdc++.h>
using namespace std;
int thuannghich(string s){
	long long i,k=0;
	for(i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			k=1;
			break;
		}else k=0;
	}
	return k;
}
int checkchan(string s){
	long long i,k=0;
	for(i=0;i<s.size()/2;i++){
		if((s[i]-48)%2!=0){
			k=1;
			break;
		}else k=0;
	}
	return k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(thuannghich(s)==0&&checkchan(s)==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
