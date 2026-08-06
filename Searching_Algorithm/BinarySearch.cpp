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

}