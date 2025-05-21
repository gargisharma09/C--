/*#include <iostream>
using namespace std;

//declare function/protyping
void printhello();

int main(){
    printhello();//function call
    return 0;
}
// function definition
void printhello(){
    cout << "hello world" << endl;
    printhello();
}*/

#include <iostream>
using namespace std;

void printhello(int n){
    if(n==0){
        return;
    }
    cout << "hello world" << endl;
    printhello(n-1);
}

int main(){
    printhello(5);//function call

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    
    return 0;
}