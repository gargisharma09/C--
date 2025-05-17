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
/*
#include <iostream> 
using namespace std;

void reverse(int arr[], int n){
    int firstvalue, secondvalue;
    for(int i=0; i<n/2; i++){
        firstvalue= arr[i];
        secondvalue= arr[n-i-1];//always use this while reversing
        arr[i]=secondvalue;
        arr[n-i-1]= firstvalue;
    }
    return 0;
}

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int n){
    int firstvalue, secondvalue;
    for(int i=0; i<n/2; i++){
        firstvalue= arr[i];
        secondvalue= arr[n-i-1];//always use this while reversing
        arr[i]=secondvalue;
        arr[n-i-1]= firstvalue;
    }
}

int main(){
    int arr[5]= {1,2,3,4,5};

    return 0;
}*/
/*

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swapping elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers inward
        start++;
        end--;
    }
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
// fibonaci series by array
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    int fib[n];
    fib[0] = 0;         

    fib[1] = 1;
    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }


    cout << "Fibonacci series: ";
    for(int i=0; i<n; i++){
        cout << fib[i] << " ";
    }
    cout << endl;
    return 0;

}*/
#include <iostream>
using namespace std;
 
void  storetable(int arr[], int n, int m,int number);

int main(){
    int tables[2][10];
    storetable(tables,0,10,2);
    storetable(tables,1,10,3);
    return 0;
}

void storetable(int arr[] [], int n, int m) {
    for(int i= 0; i<n; i++) {
        for(int j=0; j<m; j++) {
            arr[n][m]= number * (i+1); 
        }
    }
}