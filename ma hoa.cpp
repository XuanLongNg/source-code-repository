#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int i,j;
		for(i=0;i<s.size();i++){
			int k=0;
			for(j=i+1;j<s.size();j++){
				if(s[i]==s[j]) k++;
				else break;
			}
			i+=k;
			cout<<s[i]<<k+1;
		}
		cout<<endl;
	}
}
