#include <iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    string dept;
    string subject;
    double salary;

    //methods
    void changeDept(string newDept) {
        dept=newDept;
    }

};

int main(){
    Teacher t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 20000;

    cout<< t1.name<<endl;
return 0;
}