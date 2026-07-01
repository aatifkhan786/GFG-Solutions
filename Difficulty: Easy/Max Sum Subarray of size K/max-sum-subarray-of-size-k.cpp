class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0,maxi=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        maxi = max(maxi,sum);
        for(int i=k;i<arr.size();i++){
            sum=sum+arr[i];
            sum=sum-arr[i-k];
            maxi = max(maxi,sum);
        }
        
        return maxi;
    }
};