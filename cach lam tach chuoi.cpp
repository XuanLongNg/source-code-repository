#include<bits/stdc++.h> //thu vien nay thay the cho moi thu vien trong c++ 
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	stringstream ss(a); //cu gap bai tach tu thi dung stringstream, ss chi la ten cua no thoi 
	// stringstream tach chuoi va tao thanh cac luong 
	string token; //tao 1 chuoi token de nhan chuoi tu cac luong 
	while(ss>>token){ // chuoi tu stringstream day vao token, >> la luong day vao 
		if(token!=b) cout<<token<<" "; //neu token khac chuoi b thi in ra token 
	} 
}
