#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


#define a() a

class SinhVien {
public:
    string Name,cl,dob;
    string MSV = "B20DCCN001";
    float GPA;
    SinhVien() {};
    ~SinhVien() {};
    friend void nhap(SinhVien &a) {
        getline(cin,a.Name);
        scanf("/n");
        getline(cin,a.cl);
        scanf("/n");
        getline(cin,a.dob);
        scanf("/n");
        cin>>a.GPA;

        if (a.dob[2] != '/') {
            a.dob.insert(0,"0");
        }

        if (a.dob[5] != '/') {
            a.dob.insert(0,"0");
        }

    };
   friend void in(SinhVien a) {
            cout<<a.MSV<<" ";
            cout<<a.Name<<" ";
            cout<<a.cl<<" ";
            cout<<a.dob<<" ";
            cout<<fixed<<setprecision(2)<<a.GPA;
        }; 

};



int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
