#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,a="aeiouyAEIOUY";
	cin>>s;
	int i,j;
	for(i=0;i<s.size();i++){
		int k=0;
		for(j=0;j<a.size();j++){
			if(s[i]==a[j]){
				k++;
				break;
			}
		}	
		if(k==0&&s[i]>='a'&&s[i]<='z') cout<<"."<<s[i];
		if(k==0&&s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
			cout<<"."<<s[i];
		}
	}
}
