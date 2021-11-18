#include<bits/stdc++.h>
using namespace std;
int dem(int a[200], int n){
	int i,j,k=0,r=0,chan=0,le=0;
	if(n%2==0) k=1;
	for(i=0;i<n;i++){
		if(a[i]%2==0) chan++;
		else le++;
	}
	if(chan>le) r=1;
	if(r==1&&k==1)
	return 1;
	else if(r==0&&k==0)
	return 1;
	else return -1;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
	    getline(cin,a);
	    int n=0,i,b=0,c[200],d=0;
	    for(i=a.size()-1;i>=0;i--){
		    if(a[i]!=' '){
		        int k=a[i]-48;
		        b+=k*pow(10,d);
		        d++;
	        }
		    if(a[i-1]==' '||a[i-1]=='\0'){
			    c[n]=b;
			    n++;
			    b=0;
			    d=0;		
		    }
	    }
	    if(dem(c,n)==1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
