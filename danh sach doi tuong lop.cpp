#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Student{
	public:
		string name;
		int age;
		string Class;
	friend istream &operator>>(istream &is, Student &p){
		printf("\nEnter name: ");
		scanf("\n");
		getline(is,p.name);
		printf("\nEnter age: ");
		is>>p.age;
		printf("\nEnter class: ");
		is>>p.Class;
		return is;
	}
	friend ostream &operator<<(ostream &os, Student &p){
		os<<"Full Name: "<<p.name<<endl;
		os<<"Age: "<<p.age<<endl;
		os<<"Class: "<<p.Class<<endl;
		return os;
	}
};
class Teacher{
	public:
		string name;
		int age;
		string Home_Room_Class;

	friend istream &operator>>(istream &is, Teacher &p){
		printf("\nEnter name: ");
		scanf("\n");
		getline(is,p.name);
		printf("\nEnter age: ");
		is>>p.age;
		printf("\nEnter Home Room Class: ");
		is>>p.Home_Room_Class;
		return is;
	}
	friend ostream &operator<<(ostream &os, Teacher &p){
		os<<"Full Name: "<<p.name<<endl;
		os<<"Age: "<<p.age<<endl;
		os<<"Home Room Class: "<<p.Home_Room_Class<<endl;
		return os;
	}
};
bool Sort_Last(Student Stu1,Student Stu2){
	stringstream s(Stu1.name),ss(Stu2.name);
	string token;
	while(s>>token){
	}
	Stu1.name=token;
	while(ss>>token){
	}
	Stu2.name=token;
	return Stu1.name<Stu2.name;	
}
void Sort_by_last_name(Student *a,int n){
	sort(a,a+n,Sort_Last);	
}
bool Sort_Age(Student Stu1,Student Stu2){
	return Stu1.age>Stu2.age;
}
void Three_Oldest_Stu(Student *a,int n){
	sort(a,a+n,Sort_Age);
	For(i,0,3){
		cout<<a[i];
	}
}
bool Sort_LastT(Teacher Tea1,Teacher Tea2){
	stringstream s(Tea1.name),ss(Tea2.name);
	string token;
	while(s>>token){
	}
	Tea1.name=token;
	while(ss>>token){
	}
	Tea2.name=token;
	return Tea1.name<Tea2.name;	
}
void Sort_by_last_name(Teacher *a,int n){
	sort(a,a+n,Sort_LastT);	
}
void AddListStudent(){
	Student listStu[100];
	printf("Total number of students: ");
	int n; cin>>n;
	printf("\nEnter student information\n");
	For(i,0,n) cin>>listStu[i];
	printf("\nList of students before sorting:\n");
	For(i,0,n) cout<<listStu[i];
	Sort_by_last_name(listStu,n);
	printf("\nList of student after sorting:\n");
	For(i,0,n) cout<<listStu[i];
	printf("\nThe three oldest students:\n");
    Three_Oldest_Stu(listStu,n);
}
void AddListTeacher(){
	Teacher listTeach[10];
	printf("Total number of teacher: ");
	int n; cin>>n;
	printf("\nEnter teacher information\n");
	For(i,0,n) cin>>listTeach[i];
	printf("\nList of teachers before sorting:\n");
	For(i,0,n) cout<<listTeach[i];
	Sort_by_last_name(listTeach,n);
	printf("\nList of teachers after sorting:\n");
	For(i,0,n) cout<<listTeach[i];
}
int main(){
	AddListStudent();
	AddListTeacher();
}
