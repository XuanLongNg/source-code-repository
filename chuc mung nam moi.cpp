#include<bits/stdc++.h>
using namespace std;
int dem(string a[10000],long n){
	set<string>s;
	for(long i=0;i<n;i++) s.insert(a[i]);
	return s.size();
}
int main(){
	long n,i,j;
	cin>>n;
	cin.ignore();
	string a[10000];
	for(i=0;i<n;i++) getline(cin,a[i]);
	cout<<dem(a,n);
}
