#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double x=a-c,y=b-d;
		cout<<setprecision(4)<<fixed<<sqrt(x*x+y*y)<<endl;
	}
}
