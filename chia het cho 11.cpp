#include<bits/stdc++.h>
using namespace std;
void chiahet(string s,int &k){
	int i=0;
	while(i<s.size()){
	    if(i%2==0) k+=(s[i]-48);
	    else k-=(s[i]-48);
	    i++;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int k=0;
	    chiahet(s,k);
	    if(k%11==0) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	    
	}
}
