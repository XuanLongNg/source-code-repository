#include<bits/stdc++.h>
using namespace std;
string diachi(string a){
	string b;
    for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
	stringstream ss(a);
	string token; 
	int i;
	while(ss>>token){
	}
	b+=token;
	b+=a[0];
	for(i=0;i<a.size()-token.size()-1;i++){
		if(a[i]==' '&&a[i+1]!=' ') b+=a[i+1];
	}
	return b;
}
int main(){
	string a;
	getline(cin,a);
	cout<<diachi(a);
	cout<<"@ptit.edu.vn";
}
