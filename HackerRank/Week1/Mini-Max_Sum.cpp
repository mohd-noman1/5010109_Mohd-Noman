void miniMaxSum(vector<int> arr) {
    int n=arr.size();
    sort(arr.begin(), arr.end());
    long long mini=0, maxi=0;
    for(int i=1; i<n; i++){
        maxi+=arr[i];
    }
    for(int i=0; i<n-1; i++){
        mini+=arr[i];
    }
    cout<<mini<<" "<<maxi;
}
