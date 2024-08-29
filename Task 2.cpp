#include <iostream>
using namespace std;

class Department{
private:
string name;
string address;
int num_workers;

public:
    Department(){
    }
Department(string name, string address, int num_workers){
this->name=name;
this->address=address;
this->num_workers=num_workers;
}

void display(){
cout<<"Department Name: "<<name<<endl;
cout<<"Address: "<<address<<endl;
cout<<"Number of workers: "<<num_workers<<endl;
}
};

class Worker{
private:
    Department department;
public:
    string names;
    int experience;
    string expertise;

        Worker(string names, int experience, string expertise, Department department) {
        this->names = names;
        this->experience = experience;
        this->expertise = expertise;
        this->department = department;
    }


    void display1(){
    cout<<"Name: "<<names<<endl;
    cout<<"Experience: "<<experience<<endl;
    cout<<"Expertise: "<<expertise<<endl;
    department.display();
    cout<<endl;
    }

    void things(){
     cout<<names<<" is given a room"<<endl;
     cout<<names<<" is given a desk"<<endl;
     cout<<names<<" is given a system"<<endl;
     cout<<names<<" is given a cupboard"<<endl;
    }
};
int main()
{
    Department ob1("Marketing","283 Paragon Lahore",3);
    Department ob2("Finance","285 Paragon Lahore",3);
    Department ob3("Accounting","284 Paragon Lahore",3);
    Worker obj1("Raahim Waqar",3,"Marketing",ob1);
    Worker obj2("Affan Nadeem",4,"Finance",ob2);
    Worker obj3("Saad Tariq",2,"Accounting",ob3);

    obj1.display1();
    obj2.display1();
    obj3.display1();

    obj1.things();
    cout<<endl;
    obj2.things();
    cout<<endl;
    obj3.things();
}
