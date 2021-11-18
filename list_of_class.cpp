#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
#define vec(c) vector<c>
using namespace std;
class Person{
	public:
		string name;
		int age;
		string Class;
	public:
	friend istream &operator>>(istream &is, Person &p){
		printf("\nEnter name: ");
		scanf("\n");
		getline(is,p.name);
		printf("\nEnter age: ");
		is>>p.age;
		printf("\nEnter class: ");
		is>>p.Class;
		return is;
	}
	friend ostream &operator<<(ostream &os, Person &p){
		os<<"Full Name: "<<p.name<<endl;
		os<<"Age: "<<p.age<<endl;
		os<<"Class: "<<p.Class<<endl;
		return os;
	}
	bool operator<(Person b){
		stringstream s(name),ss(b.name);
	    string token;
	    while(s>>token){
	    }
	    name=token;
	    while(ss>>token){
        }
	    b.name=token;
		return name<b.name;
    }
    bool operator>(Person b){
    	return !(name<b.name);
	}
	
};
bool Sort_Last(Person a,Person b){
	return a<b;
}
bool Sort_Age(Person a,Person b){
	return a.age>b.age;
}
class Student: public Person{
	public:
		vec(Person) list;
	void AddMember(int n){
		Person a;
		For(i,0,n){
			cin>>a;
			list.push_back(a);
		}
	}
	void DisplayList(){
		For(i,0,list.size()){
			cout<<list[i];
		}
	}
	void Sort_by_last_name(){
	    sort(list.begin(),list.end(),Sort_Last);	
    }
    void Three_Oldest_Stu(){
	    sort(list.begin(),list.end(),Sort_Age);
	    For(i,0,3){
		    cout<<list[i];
	    }
    }
};
class Teacher: public Person{
	public:
		vec(Person) List;
	void AddMember(int n){
		Person a;
		For(i,0,n){
			cin>>a;
			List.push_back(a);
		}
	}
	void DisplayList(){
		For(i,0,List.size()){
			cout<<List[i];
		}
	}
	void Sort_by_last_name(){
	    sort(List.begin(),List.end(),Sort_Last);	
    }
};
void AddListStudent(){
	Student list;
	printf("Total number of students: ");
	int n; cin>>n;
	printf("\nEnter student information\n");
	list.AddMember(n);
	printf("\nList of students before sorting:\n");
	list.DisplayList();
	list.Sort_by_last_name();
	printf("\nList of student after sorting:\n");
	list.DisplayList();
	printf("\nThe three oldest students:\n");
    list.Three_Oldest_Stu();
}
void AddListTeacher(){
	Teacher List;
	printf("Total number of teacher: ");
	int n; cin>>n;
	printf("\nEnter teacher information\n");
	List.AddMember(n);
	printf("\nList of teachers before sorting:\n");
	List.DisplayList();
	List.Sort_by_last_name();
	printf("\nList of teachers after sorting:\n");
	List.DisplayList();
}
int main(){
	AddListStudent();
	AddListTeacher();
}
