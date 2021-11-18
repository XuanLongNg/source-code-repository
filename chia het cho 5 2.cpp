#include<bits/stdc++.h>
using namespace std;
int mod(int x){
	if(x%4==0) return 1;
	if(x%4==1) return 2;
	if(x%4==2) return 4;
	if(x%4==3) return 3;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int i,k=0;
	    for(i=0;i<s.size();i++){
	    	if(s[i]=='1'){
	    		k+=mod(s.size()-i-1);
			}
		}
	    if(k%5==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

