#include<bits/stdc++.h>
using namespace std;
void result(char a[100],int n){
	for(int i=0;i<=n;i++)
    cout<<a[i];
	cout<<endl;
}
void Try(char a[100],int n,int k,int i){
    for(int j=0;j<=k;j++){
    	if(a[i-1]<='A'+j){
    		a[i]='A'+j;
            if(i==n-1){
        	result(a,i);
		     } 
           else Try(a,n,k,i+1);
		}     
    }
}
int main(){
    char a;
    char b[100];
    int c,d;
    cin>>a>>c;
    d=a-'A';
    Try(b,c,d,0);
}
