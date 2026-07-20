class Solution {
  public:
    bool binary(vector<int>&arr,int l,int r,int k){
        if(l>r)return false;
        int mid=l+( r-l)/2;
        if(arr[mid]==k)return true;
        else if(arr[mid]<k){
            binary(arr,mid+1,r,k);
        }
        else{
            binary(arr,l,mid-1,k);
        }
        
    }
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int l=0;
        int r=arr.size()-1;
        bool ans= binary(arr,0,r,k);
        return ans;
    }
};