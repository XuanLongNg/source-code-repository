#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int i,hai=0,bon=0,sau=0,tam=0;
	    for(i=0;i<s.size();i++){
	    	if(s[i]=='1'){
			    int k=i;
	            k=(s.size()-i-1)%4;
	            switch(k){
		            case 1:
		            hai++;
		            break;
		            case 2:
		            bon++;
		            break;
		            case 0:
		            sau++;
		            break;
		            case 3:
		            tam++;
		            break;	
	            }
			}
		}
	    if((hai*2+tam*3+bon*4+sau*1)%5==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

