#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x;
    double y;	
};
void input(Point &p){
    	cin>>p.x>>p.y;
	}
double distance(Point &A,Point &B){
	double a,b;
	a=abs(A.x-B.x); 
	b=abs(A.y-B.y);
	double m=sqrt(pow(a,2)+pow(b,2));
    return m;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
