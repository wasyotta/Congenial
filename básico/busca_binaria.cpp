#include <iostream>

using namespace std;


int indexOf(int arr[], int size, int value){
    int left = 0;
    int right = size -1;

    while(left <= right){
        int middle = int((left + right) / 2);

        if(arr[middle] == value){
            return middle;
        }else if (arr[middle] < value){
            left = middle +1;
        }else {
            right = middle -1;
        }
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)  / sizeof(arr[0]);
    int value = 5;

    int index = indexOf(arr, size, value);
        if(index > -1){
            cout<<"O indice do número " << value  << " é " <<index;
        }else{
            cout<<"O elemento"<<value<< "não está no array";
        }

    return 0;
}