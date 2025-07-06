/*#include <iostream>
#include <vector>


using namespace std;

int main(){
    vector<int> vec= {1,2,3}; // Declare a vector of integers    
    cout<< vec[2] << endl; // Access the first element of the vector
    return 0;
}*/
/*#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>vec (4,0);
    for(int i:vec) {
        cout<<i<< endl;
    }
    
    return 0;
}*/
/*#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>vec= {'a','b','c','d','e'};
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<endl;
    }
    
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;        

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout<< vec.size() << endl; // Output the size of the vector
    cout<< vec.capacity() << endl; // Output the capacity of the vector
}