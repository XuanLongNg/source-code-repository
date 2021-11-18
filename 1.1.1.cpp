#include<bits/stdc++.h>
#define f(i,n,m) for(int i=n;i<m;i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            long i,j;
            cin>>n;
            long a[100][100];
            f(i,0,n)
                f(j,0,n)
                    cin>>a[i][j];
            map<long,long>s;
            f(i,0,n)
                f(j,0,n)
                    s[a[i][j]]=a[i][j];
            map<long, long>:: iterator m;
            m=s.begin();
            while(m!=s.end()){
                int r=1;
                long h=m->second;
                f(i,0,n){
                	int k=0;
                    f(j,0,n){
                        if(a[i][j]==h){
                            k=1;
                            break;
                        }else k=0;
                    }   
                    if(k==0){
                        r=0;
                        break;
                    }
                }
                if(r==0) s[h]=0;
                m++;
            }
            for(m=s.begin();m!=s.end();m++){
            	long h=m->second;
                if(s[h]!=0)
                cout<<s[h]<<endl;
            }
    }
}
