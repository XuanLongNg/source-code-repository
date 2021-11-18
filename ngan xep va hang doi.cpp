#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	char h=s[0];
	int n=1;
	for(int i=1;i<s.size()+1;i++){
		if(s[i]!=s[i-1]){
			cout<<s[i-1]<<n;
			n=0;
		}
		n++;
	}
	
}


