/*Arrays: collections of similar data types stored at contiguous memory locations*/
/*#include <iostream>
using namespace std;    
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Accessing array elements using pointers
    int *ptr = arr;
    cout << "Array elements using pointers: ";
    for(int i = 0; i < 5; i++){
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    
    return 0;
}   */
/*
#include <iostream>
using namespace std;        
int main(){
    int marks[3] = {99,95,94};
    cout << "Marks: ";
    for(int i = 0; i < 3; i++){
        cout << marks[i] << " ";
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main(){
    float prices[3] = {100, 200, 300};
    cout << "Prices after 18% GST: ";
    
    for(int i = 0; i < 3; i++){
        float final_price = prices[i] + (0.18 * prices[i]);
        cout << final_price << " ";
    }

    return 0;
}
