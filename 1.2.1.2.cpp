#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


#define a() a

void fixName(string &name) {
    for (int i = 0; i < name.length(); i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
                name[i]+=32;
            }    
        }
    }
}

void fixDay(string &day) {
    if (day[2] != '/') {
        day.insert(0,"0");
    } 
    if (day[5] != '/') {
        day.insert(3,"0");
    } 
    
}

class SinhVien {
public:
    string Name,cl,dob;
    string MSV = "B20DCCN001";
    float GPA;
    SinhVien() {};
    ~SinhVien() {};
    
    
    friend istream &operator>>(istream &in , SinhVien &a) {
        getline(in,a.Name);
        scanf("/n");
        getline(in,a.cl);
        scanf("/n");
        getline(in,a.dob);
        in>>a.GPA;
        return in;
           
    }
    friend ostream &operator<<(ostream &out , SinhVien a) {
    	    fixName(a.Name);
            fixDay(a.dob); 
            out<<a.MSV<<" ";
            out<<a.Name<<" ";
            out<<a.cl<<" ";
            out<<a.dob<<" ";
            out<<fixed<<setprecision(2)<<a.GPA; 
            return out;
    }
    
};



         
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
