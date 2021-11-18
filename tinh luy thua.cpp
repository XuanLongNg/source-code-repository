#include<iostream> 
using namespace std; 
int main() { 
    int n ; 
	cin >> n; 
	while(n--) { 
	    int a, b, p; 
		cin >> a >> b >> p; 
		int t = a % p; 
		long long m = 1; 
		b %= p - 1; 
		for(int i = 1; i <= b; i++){ 
		    m = m * t % p; 
		} 
		cout << m << endl; 
	} 
}
