#include<bits/stdc++.h>
using namespace std;
string loaibotu(string a,string b){
	string d;
	stringstream c(a);
	string token;
	while(c>>token){
		if(token!=b){
			d+=token;
			d+=" ";
		}
	}
	return d;
}
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	cout<<loaibotu(a,b);
}

