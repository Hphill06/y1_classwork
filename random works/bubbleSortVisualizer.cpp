// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;


void bubbleSort(int array[], int size);
void printARR (int arrayp[], int size);
int main() {
    // Write C++ code here
    int arr[] = {2, 4, 5, 7, 2, 8, 9, 1, 0};
    bubbleSort(arr,9);
    return 0;
}

void printARR (int arrayp[], int size){
    for (int i = 0; i <size ; i++){
        if (i == size-1){
            cout << arrayp[i];
        }else{
            cout << arrayp[i] << ", ";

        }
    }
    cout << "\n";
}
void bubbleSort(int array[], int size){
    int maxEl;
    int index;
    int COUNT = 0;
    for (maxEl = size -1; maxEl > 0; maxEl--){
        
        
        for (index = 0; index <maxEl; index++){
            if (array[index] > array[index+1]){
                swap(array[index],array[index+1]);
            }
        }
        cout << "PASS NUMBER " << COUNT +1 << " :";
        COUNT++;
        printARR(array,size);
    }
    
    
    
}
