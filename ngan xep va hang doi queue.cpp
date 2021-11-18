#include<bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	queue<int> s;
	int n,k; cin>>n;
	For(i,0,n){
		int m;
		cin>>m;
		s.push(m);
	}
	cin>>k;
	For(i,0,k){
			int x=s.front();
			s.pop();
			s.push(x);
		
	}
	while(!s.empty()){
	    cout<<s.front()<<" ";
	    s.pop();
	}
}


