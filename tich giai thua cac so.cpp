#include<bits/stdc++.h>
using namespace std;
int comp(const int a, const int b){
   return a > b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		string k,number;
		cin>>n>>k;
		for(i=0;i<k.size();i++){
			if(k[i]=='2'||k[i]=='3'||k[i]=='5'||k[i]=='7') number+=k[i];
			if(k[i]=='4') number+="223";
			if(k[i]=='6') number+="53";
			if(k[i]=='8') number+="7222";
			if(k[i]=='9') number+="7332";
			
		}
		sort(number.begin(),number.end(),comp);
		cout<<number<<endl;
	}
}
