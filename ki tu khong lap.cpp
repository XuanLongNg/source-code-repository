#include<bits/stdc++.h>
using namespace std;
string khong_lap(string s){
	string m;
	int i,j;
	for(i=0;i<s.size();i++){
	    int k=0;
	    for(j=0;j<s.size();j++){
	    	if(s[i]==s[j]) k++;
		}
		if(k==1) m+=s[i];
	}
	return m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s,m;
	    cin>>s;
	    cout<<khong_lap(s);
		cout<<endl;
	}
}
