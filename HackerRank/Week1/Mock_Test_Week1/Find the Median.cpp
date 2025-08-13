int findMedian(vector<int> arr) {
 sort(arr.begin(), arr.end());
 int middle=arr.size()/2;
 return arr[middle];
}
