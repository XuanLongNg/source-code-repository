#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int k;
		cin>>k;
		double o=0;
		for(int i=1;i<=k;i++){
			o+=(double)1/i;
		}
		cout<<setprecision (4)<<fixed<<o<<endl;
}
