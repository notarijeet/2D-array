#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

// Search element in 2D array
bool isPresent(int arr[][3], int target) {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

// Row-wise sum
void rowSum(int arr[][3]) {
    cout << "Row-wise sums: ";
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// Column-wise sum
void colSum(int arr[][3]) {
    cout << "Column-wise sums: ";
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// Largest row sum
int largestRowSum(int arr[][3]) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum row sum is " << maxi << endl;
    return rowIndex;
}

int main() {
    int arr[3][3];

    // Input array
    cout << "Enter 3x3 matrix elements:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

    // Output array
    cout << "Matrix is:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Search element
    int target;
    cout << "Enter target: ";
    cin >> target;
    if(isPresent(arr, target)){
        cout << "Element found ✅" << endl;
    } else {
        cout << "Not found ❌" << endl;
    }

    // Row-wise & Column-wise sum
    rowSum(arr);
    colSum(arr);

    // Largest row sum
    int ansIndex = largestRowSum(arr);
    cout << "Max row is at index " << ansIndex << endl;

    return 0;
}
