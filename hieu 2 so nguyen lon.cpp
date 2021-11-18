#include<bits/stdc++.h>
using namespace std;
void tru2so(string a,string b,int c[1000],int &t){
    int a1=a.length(),a2=b.length();
    vector<int> n;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=a2;i<a1;i++) b+="0";
    int l=0; 
    for(int i=0;i<a1;i++){ 
        int h=a[i]-'0',g=b[i]-'0';
        int f=h-g-l;
        if(f<0){
            f+=10;
            l=1;
        }else l=0;
        n.push_back(f);
    }
    t=n.size();
    for(int i=n.size()-1;i>=0;i--) c[i]=n[i];
}
int sosanh(string a, string b){
    for(int i=0;i<a.size();i++){
        if(a[i]>b[i]){
            return 1;
            break;
        }
        else if(a[i]<b[i]){
            return -1;
            break;
        }
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		int c[1000],h=0;
        cin>>a>>b;
        if(a.length()>=b.length()){
            if(a.length()==b.length())
            if(sosanh(a,b)>=0) tru2so(a,b,c,h);
            else tru2so(b,a,c,h);
            else tru2so(a,b,c,h);
        }
        else tru2so(b,a,c,h);
        for(int i=h-1;i>=0;i--) cout<<c[i];
        cout<<endl;
    }
}
