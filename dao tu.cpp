#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string S;
	    //cin >> S;
        getline(cin, S);
	    stringstream ss(S);
	
	    map<string, int> m;
	    string token;
	    string a[100];
	    int count=0;
	    while (ss >> token)
		{ 
	  		a[count] = token;
	  		count++;
		}
	    for(int i=count; i>=0; i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
