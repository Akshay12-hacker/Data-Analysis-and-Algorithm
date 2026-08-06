#include <iostream>
using namespace std;

int LinearSearch(int arr[],int key,int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }   
    }
    return -1;
}

int main(){
    int size;
    int key;

    cout << "Enter the size of the Array: ";
    cin >> size;

    int arr[size];

    for(int i =0; i < size;i++){
        cin >> arr[i];
    }

    cout << "Enter the key to find the index: ";
    cin >> key;

    int output = LinearSearch(arr,key,size);

   if (output != -1)
        cout << key << " is present at index: " << output << endl;
    else
        cout << key << " is not present in the array." << endl;

return 0;

}