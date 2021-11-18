#include<bits/stdc++.h>
using namespace std;
bool mart[10000];
void snt(int a, int b){
    if(a*a>b) mart[a*a]=true;
    else{
    	for(int i=a;i*a<b;i++){
        mart[i*a]=true;
        }
        if(mart[a+1]==0) snt(++a,b);
        else snt(a+=2,b); 
	}  
}
int greatestCommonPrimeDivisor(int a, int b)
{
    snt(2,min(a,b));
    for(int i=min(a,b)/2;i>=2;i--){
        if(a%i==0&&b%i==0&&mart[i]==false)
        return i;
    }
    return -1;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<greatestCommonPrimeDivisor(a,b);
	return 0;
}
