#include<bits/stdc++.h>
using namespace std;
void dem(string name[100],int n,int k){
    int h=0,sum=0;
    map<int, int>s;
    for(h;h<n-k;h++){
        for(int j=h;j<k;j++){
            s[name[h].size()]++;
        }
    }
    map<int,int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        sum+=it->second/2;
    }
    cout<<sum;
}
int main(){
	int n,k;
    string name[100];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
}