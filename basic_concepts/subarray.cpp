/*#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n] = {1, 2, 3, 4, 5};

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            cout << "Subarray from index " << st << " to " << end << ": ";
            for(int i=st; i<=end; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int maxSum =  INT_MIN;

    for(int st = 0; st < n; st++){
        int currentSum = 0;
        for(int end = st; end < n; end++){
            currentSum += arr[end];
            cout << "Subarray from index " << st << " to " << end << ": ";
            for(int i = st; i <= end; i++){
                cout << arr[i] << " ";
            }
            cout << " | Current Sum: " << currentSum << endl;
            maxSum = max(maxSum, currentSum);
        }
    
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;

    for(int st = 0; st < n; st++){
        int currentSum = 0;
        for(int end = st; end < n; end++){
            currentSum += arr[end];
            cout << "Subarray from index " << st << " to " << end << ": ";
            for(int i = st; i <= end; i++){
                cout << arr[i] << " ";
            }
            cout << " | Current Sum: " << currentSum << endl;
            maxSum = max(maxSum, currentSum);
        }   
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl; 
    
    
    return 0;
}
*/

// Kadane's Algorithm for Maximum Subarray Sum
/*#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(i=0; i<n; i++){
        currentsum += arr[i];
        maxSum = max(maxSum, currentsum);
        if(currentsum < 0){
            currentsum = 0;
        }           

    cout << "Maximum Subarray Sum: " << maxSum << endl; 

    }
    int arr[n] = {1, 2, 3, 4  , 5};
    int maxSum = INT_MIN;
    int currentsum = 0;
    for(int i = 0; i < n; i++){

        currentsum += arr[i];
        maxSum = max(maxSum, currentsum);
        if(currentsum < 0){
            currentsum = 0;
        }

    return 0;
}

*/
