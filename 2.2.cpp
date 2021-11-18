#include<bits/stdc++.h>
using namespace std;
void chuan_hoa(string &p){
	if(p[1]=='9'){
            p[0]++;
            p[1]='0';
        }else{
            p[1]++;
        }
}
int main(){
    string k;
    cin>>k;
    for(int i=0;i<=10;i++){
    	cout<<k;
    	chuan_hoa(k);
    	cout<<endl;
	}
    
    
}
