// constructor 
//special method invoked automatically at time of object creation .under hasfor initiasation
//same name as class
// constructor doesnt have a return type
// only called once (automaticallly) , at object creation 
// memory allocation happens when contructor called  
/*#include <iostream>
using namespace std;
class Teacher{
    //properties/ attributes
public:
    Teacher() {
        cout<< "Hi,  I am Gargi \n";
    }


    string name;
    string dept;
    string subject;
    double salary;

    //methods
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setsalary(double s) {
        salary = s;
    }
    //getter
    double getsalary() {
        return salary;
    }
};

int main(){
    Teacher t1; //constructor call 
    t1.name = "gargi";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setsalary(25000);

    cout<<t1.salary << endl;
    cout<<t1.getsalary() << endl;
    
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Teacher{
    //properties/ attributes
private:
double salary;

public:
Teacher() {
    dept = "Computer Science";
}
string name;
    string dept;
    string subject;
    double salary;

    //methods
    void changeDept(string newDept){
        dept = newDept;

    }
    //setter
    void setsalary(double s) {
        salary = s;
    }
    //getter
    double getsalary() {
        return salary;
    }
};

int main()
{
    Teacher t1; //constructor call 
    t1.name = "gargi";
    t1.subject = "C++";
    t1.setsalary(25000);

    cout<< t1.dept<< endl;

    
    return 0;

}
*/
/*
types of constructor
1. Parameterised constructor
2. non parameterised cons .
3. copy */

/*
#include <iostream>
using namespace std;
class Teacher{
    //properties/ attributes
private:
double salary;

public:
// non parameterised 
Teacher() {
    dept = "Computer Science";
}

//parameterised cons.
Teacher(string n,string s, double s) {
   name = n;
   dept = d;
   subject = s;
   salary = sal;
}

string name;
    string dept;
    string subject;
    

    //methods
    void changeDept(string newDept){
        dept = newDept;

    }
    void getInfo() {
        cout<< "name :"<<name <<endl;
        cout<< "subject :"<<subject <<endl;
    }
    
};

int main()
{
    Teacher t1("Gargi", "Computer Science", "C++", 2500); //constructor call 
    
   t1.getInfo();

    
    return 0;

}
*/
//copy constructor
/*
#include <iostream>
using namespace std;
class Teacher{
    //properties/ attributes
private:
double salary;

public:
// non parameterised 
Teacher() {
    dept = "Computer Science";
}

//parameterised cons.
Teacher(string n,string s, double s) {
   name = n;
   dept = d;
   subject = s;
   salary = sal;
}

string name;
    string dept;
    string subject;
    

    //methods
    void changeDept(string newDept){
        dept = newDept;

    }
    void getInfo() {
        cout<< "name :"<<name <<endl;
        cout<< "subject :"<<subject <<endl;
    }
    
};

int main()
{
    Teacher t1("Gargi", "Computer Science", "C++", 2500); //constructor call 
   //t1.getInfo();

   Teacher t2(t1); //default copy constructor
   t2.getInfo();
return 0;

}*/
/*
#include <iostream>
using namespace std;

class Teacher {
    // Properties/attributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Non-parameterized constructor
    Teacher() {
        dept = "Computer Science";
    }

    // Parameterized constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // Copy constructor
    Teacher(const Teacher &t) {
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
    }

    // Methods
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Parameterized constructor call
    Teacher t1("Gargi", "Computer Science", "C++", 2500);
    t1.getInfo();

    // Copy constructor call
    Teacher t2(t1); //default copy constructor
    t2.getInfo();

    return 0;
}
special constructor(default) used to copy  properties one object into another .
#include <iostream>
using namespace std;

class Teacher {
    // Properties/attributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Non-parameterized constructor
    Teacher() {
        dept = "Computer Science";
    }

    // Parameterized constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    //copy constructor
Teacher(Teacher &orgobj){
    cout<<"I am custom copy constructor\n";
    this->name = orgobj.name;
    this->dept = orgobj.dept;
    this->subject = orgobj.subject;
    this->salary = orgobj.salary;
}
     

    // Copy constructor
    Teacher(const Teacher &t) {
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
    }

    // Methods
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Parameterized constructor call
    Teacher t1("Gargi", "Computer Science", "C++", 2500);
    t1.getInfo();

    // Copy constructor call
    Teacher t2(t1);
    t2.getInfo();

    return 0;
}*/

// Shallow copy and Deep copy

// A shallow copy of any object copies all of the member values from one object to another .
// A deep copy, on the other hand not only copies the member values but also make the copies of anny  dynamically allocated memory that the members point to .
#include <iostream>
#include<string>
using namespace std;

class Student{
public:
   string name;
   double cgpa;

   Student(string name, double cgpa) {
    this->name = name;
    this->cgpa = cgpa;
   }

void getInfo() {
    cout << "name :" << name << endl;
    cout << "cgpa :" << cgpa << endl;
}

};
int main() 
{
    Student s1("rahul kumar", 8.9);

    Student s2(s1);
    s2.getInfo();
    
    return 0;
}
#include <iostream>
#include<string>
using namespace std;

class Student{
public:
   string name;
   double cgpa;

   Student(string name, double cgpa) {
    this->name = name;
    this->cgpa = cgpa;
   }

   Student(Student &obj) {
    this->name = obj.name;
    this->cgpa = obj.cgpa;
   }
void getInfo() {
    cout << "name :" << name << endl;
    cout << "cgpa :" << cgpa << endl;
}

};
int main() 
{
    Student s1("rahul kumar", 8.9);

    Student s2(s1);
    s2.getInfo();
    
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

class Student{
public:
   string name;
   double cgpa;

   Student(string name, double cgpa) {
    this->name = name;
    this->cgpa = cgpa;
   }

   Student(Student &obj) {
    this->name = obj.name;
    this->cgpa = obj.cgpa;
   }
void getInfo() {
    cout << "name :" << name << endl;
    cout << "cgpa :" << cgpa << endl;
}

};
int main() 
{
    Student s1("rahul kumar", 8.9);

    Student s2(s1);
    s2.getInfo();
    
    return 0;
}