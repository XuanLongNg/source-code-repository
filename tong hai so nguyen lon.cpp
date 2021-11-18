#include<bits/stdc++.h>
using namespace std;
void cong2so(string a,string b,int c[1000],int &h){
    int a1=a.length(),a2=b.length();
    vector<int> n;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=a2;i<a1;i++) b+="0";
    int l=0; 
    for(int i=0;i<a1;i++){
        int h=a[i]-'0',g=b[i]-'0';
        int f=h+g+l;
        n.push_back(f%10);
        l=f/10;
    }
    if(l!=0) n.push_back(l);
    for(int i=n.size()-1;i>=0;i--) c[i]=n[i];  
    h=n.size()-1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		int c[1000],h=0;
        cin>>a>>b;
        if(a.length()>b.length())
        cong2so(a,b,c,h);
        else cong2so(b,a,c,h);
        for(int i=h;i>=0;i--) cout<<c[i];
        cout<<endl;
    }
}
