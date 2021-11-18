#include<bits/stdc++.h>
using namespace std;
#define a() a;
void xoaNULL(string &a){
    stringstream ss(a);
	string ten[10],muon; 
	int i=0,k;
	while(ss>>ten[i]){
		i++;
	}
	k=i;
	for(int i=0;i<=k;i++){
	    muon+=ten[i];
	    if(i!=k) muon+=" ";
	}
	a=muon;
}
void chuthuong(string &a){
    for(int i=0;i<a.size();i++){
        if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
    }
    a[0]-=32;
    for(int i=1;i<a.size();i++){
        if(a[i]==' ') a[i+1]-=32;
    }

}
class SinhVien{
    public:
    string masv;
    string name;
    string date;
    float gpa;
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
    void kiemtra(){
	    if(date[1]=='/'){
	    int k=date.size();
	    date.push_back(date[k]);
		for(int i=k;i>=3;i--){
			date[i]=date[i-1];
		}
		date[1]=date[0];
		date[0]='0';
		date[2]='/';	
	    }
	    if(date[4]=='/'){
	    int k=date.size();
	    date.push_back(date[k]);
		for(int i=k;i>=6;i--){
			date[i]=date[i-1];
		}
		date[4]=date[3];
		date[3]='0';
		date[5]='/';	
	    }
        xoaNULL(name);
        chuthuong(name);
    }
    friend istream &operator>>(istream &is,SinhVien &obj){
        getline(is,obj.name);
        getline(is,obj.masv);
        getline(is,obj.date);
        is>>obj.gpa;
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien a){
        a.kiemtra();
        os<<"B20DCCN001 "<<a.name<<a.masv<<" "<<a.date<< " ";
        os<<fixed<<setprecision(2)<<a.gpa<<endl;
        return os;
    }
};
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
