int binarySearch(int arr[], int low, int high, int target) {
    bool found = true;
    while(low <= high){
        int mid = (low + high) /2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
return -1;
}

int main(){
    int n;int target; int arr[];
    cout << "Enter the size of the Array: " << endl;
    cin >> n;
    cout << "Enter the Array Elements: "<< endl;
    for()
}