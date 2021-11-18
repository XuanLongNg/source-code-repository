#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
	    getline(cin,a);
	    long g,n,i,j,m;
		cin>>g;
		cin.ignore();
		m=a.size();
	    n=b.size();
	    for(i=0;i<m;i++){
	    	int k=0;
	    	for(j=0;j<n;j++){
	    		if(a[i]==b[j]){
	    			k=1;
	    			break;
				}else k=0;
			}
			if(k==0){
				n++;
				b[n-1]=a[i];
			}
		}
		if(n+g>=24) cout<<"1"<<endl;
		else cout<<"0"<<endl;		
	}
}
