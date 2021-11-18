#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s,m;
	    cin>>s;
	    int i,j,k=0;
	    for(i=0;i<s.size();i++){
	    	for(j=i;j<s.size();j++){
	    		if(s[i]==s[j]){
	    			k++;
				}
			}
		}
		cout<<k<<endl;
	}
}
