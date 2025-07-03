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
#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>vec= {'a','b','c','d','e'};
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<endl;
    }
    
    return 0;
}