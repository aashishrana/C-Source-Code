#include <iostream>
using namespace std;

bool isPresent(int arr[][2], int element, int row, int col) {

    for(int row = 0; row<3; row++){
        for(int col=0; col<2; col++) {
            if(arr[row][col] == element) {
                return 1;
            }
        }
        return 0;
    }
}

int main(){

    int arr[3][2] = {1,2,3,4,5,6};

    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<< endl;
    }

    cout<< " Entr the Element to search " << endl;
    int element;
    cin >> element;

    if(isPresent(arr, element, 3, 2)){
        cout<<" Element found" << endl;
    }
    else{
        cout<<"Not Found" << endl;
    }


    return 0;
}