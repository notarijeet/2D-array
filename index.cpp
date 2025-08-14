//Linear Search in 2D Arrays;
#include <bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][4], int target, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main() {
	// your code goes here
	//step1: declare a 2D array(3 rows, 4 coloumns)
	int arr[3][4];
	//step2;input elements;
	cout<<"enter 12 numbers(3X4 matrix)";
	for(int i=0;i<3;i++){
	    for(int j=0;j<4;j++){
	        cin>>arr[i][j];
	    }
	}
	//step3: output the array;
	cout<<"\n the matrix is :\n";
	for(int i=0;i<3;i++){
	    for(int j=0;j<4;j++){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	//step 4: Search for an elements
	int target;
	cout<<"\nEnter element to search: ";
	cin>>target;
	
	if(isPresent(arr, target , 3, 4)){
	    cout<<"Element Found \n";
	}
	else{
	    cout<<"Element not Found";
	}
	
	return 0;
}
