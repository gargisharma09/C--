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

/*#include <iostream>
using namespace std;

int main(){
    float prices[3] = {100, 200, 300};
    cout << "Prices after 18% GST: ";
    
    for(int i = 0; i < 3; i++){
        float final_price = prices[i] + (0.18 * prices[i]);
        cout << final_price << " ";
    }

    return 0;
}*/
//array operators
/*#include <iostream>
using namespace std;

int main(){
    int age= 22;
    int *ptr= &age;
    cout << "Age: " << age << endl;
    cout << "Pointer to age: " << ptr << endl;
    ptr++;
    cout << "Pointer after increment: " << ptr << endl;
    
    return 0;
}
*/
/*#include <iostream>
using namespace std;

int main(){
    int marks[2][3];
    marks[0][0]= 90;
    marks[0][1]= 95;
    marks[0][2]= 100;

    marks[1][0]= 85;
    marks[1][1]= 90;
    marks[1][2]= 95;
    
    for(int i=0; i<3; i++){
        cout << marks[0][i] << " ";
    }
    cout << endl;
    for(int i=0; i<3; i++){
        cout << marks[1][i] << " ";
    }           
    cout << endl;
    cout << "Size of marks array: " << sizeof(marks) << endl;   

    cout << "Size of marks[0] array: " << sizeof(marks[0]) << endl;
    cout << "Size of marks[1] array: " << sizeof(marks[1]) << endl;     
    
    return 0;
}
*/
/*
#include <iostream>     
using namespace std;

int countodd(int arr[],int n );
int main(){
    int arr[]= {1,2,3,4,5,6};
    cout << "Array elements: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<endl;
    cout<<countodd(arr,6)<<endl;
    cout << "Size of arr: " << sizeof(arr) << endl;
    return 0;

}

int countodd(int arr[],int n){
    int count= 0;
    for(int i=0; i<n; i++){
        if(arr[i] %2!=0){//odd
            count++;
    }
}

return count;
}*/

/* simple array reversal concept
for(int i=0; i<n/2; i++){
    firstvalue= arr[i];
    secondvalue= arr[n-i-1];//always use this while reversing
    arr[i]=secondvalue;
    arr[n-i-1]= firstvalue;
}*/

#include <iostream> 
using namespace std;
int main(){

    return 0;
}


