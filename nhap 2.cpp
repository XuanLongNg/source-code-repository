#include<bits/stdc++.h>
using namespace std;
void tru2so(string a,string b){
    string lon=a,be=b;
    int x=a.size(),y=b.size();
    if(y>x){
        lon=b;
        be=a;
        x=b.size();
        y=a.size();
    } 
    string n;
    int l=0;
    for(int i=0;i<x;i++){
        int h=lon[x-i-1]-48,g=be[y-i-1]-48;
        int f=h+g+l;
        if(i<y){
        if(f>=10){
            f-=10;
            n[i]=f+48;
            l=1;
        }else{
            n[i]=f+48;
            l=0;
        }
        }else{
            if(l>0&&i!=x-1){
                int o=lon[x-i-1]-48;
                if(o+l>=10){
                    o+=l;
                    o-=10;
                    n[i]=o+48;
                    l=0;
                }else{
                    o+=l;
                    n[i]=o+48;
                    l=0;
                }   
            }else if(l>0&&i==x-1){
                n[i]=lon[x-i-1];
                n[i+1]='1';
                x++;
            }
            else{
                n[i]=lon[x-i-1];
            }
        }
        if(x==y&&l>0){
            n[x-1]=lon[x-(x-1)-1];
            n[x]='1';
        }
    }
    for(int i=x;i>=0;i--) cout<<n[i];
    cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
        cin>>a>>b;
        tru2so(a,b);
    }
}
