#include<bits/stdc++.h>
using namespace std;
string chuan_hoa(string a,string b){
	string c;
	for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		if(a[i]>='a'&&a[i]<='z'&&a[i-1]==' '||i==0) a[i]-=32;
	}
	b=a;
	stringstream ss(a),gg(b);
	string token; 
	int i,k=0;
	while(ss>>token){
		k++;
	}
	for(int i=1;i<=k;i++)
	{
		if(i==k){
			c+=", ";
			gg>>token;
			for(int i=0;i<=token.size();i++){
		        if(token[i]>='a'&&token[i]<='z') token[i]-=32;
	        }
		    c+=token;
		}else{
			if(i!=1) c+=" ";
			gg>>token;
		    c+=token;
		}
	}
	return c;
}
int main(){
	string a,b,c;
	getline(cin,a);
	
	cout<<chuan_hoa(a,b);	
}
