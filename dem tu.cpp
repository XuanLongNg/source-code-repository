#include<bits/stdc++.h>
using namespace std;
int demtu(string a){
	int k=0;
	stringstream ss(a);
	string token;
	while(ss>>token) k++;
	return k;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		cout<<demtu(a)<<endl;
	}
}
