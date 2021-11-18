#include<bits/stdc++.h>
using namespace std;
#define a() a;
class SinhVien{
    public:
    string masv;
    string name;
    string date;
    double gpa;
    SinhVien(string masv,string name,string date,double gpa){
        this->masv=masv;
        this->name=name;
        this->date=date;
        this->gpa=gpa;        
    }
    SinhVien(){
        name="";
        masv="";
        date="";
        gpa=0;
    }
};
void nhap(SinhVien &a){
    getline(cin,a.name);
    getline(cin,a.masv);
    getline(cin,a.date);
    cin>>a.gpa;
}
void kiemtra(SinhVien &p){
	if(p.date[1]=='/'){
	    int k=p.date.size();
	    p.date.push_back(p.date[k]);
		for(int i=k;i>=3;i--){
			p.date[i]=p.date[i-1];
		}
		p.date[1]=p.date[0];
		p.date[0]='0';
		p.date[2]='/';	
	}
	if(p.date[4]=='/'){
	    int k=p.date.size();
	    p.date.push_back(p.date[k]);
		for(int i=k;i>=6;i--){
			p.date[i]=p.date[i-1];
		}
		p.date[4]=p.date[3];
		p.date[3]='0';
		p.date[5]='/';	
	}
}
void in(SinhVien a){
    kiemtra(a);
    cout<<"B20DCCN001 Nguyen Van A "<<a.masv<<" "<<a.date<< " ";
    cout<<fixed<<setprecision(2)<<a.gpa<<endl;
}

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}