// Last updated: 15/05/2026, 17:46:55
class Solution {
public:
    void merge(int low,int high,int mid,vector<int>& nums,int& reversePairs){
        int n1 = mid-low+1;
        int n2 = high-mid;
        int j = mid+1;
        for(int i = low;i<=mid;i++){
            while(j<=high && nums[i]>(long long)2*nums[j]){
                j++;
            }
            reversePairs += j-(mid+1);
        }
        vector<int> left(n1);
        vector<int> right(n2);
        for(int i=0;i<n1;i++) left[i] = nums[low+i];
        for(int i=0;i<n2;i++) right[i] = nums[mid+1+i];
        int k = low,i=0;
        j=0;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                nums[k] = left[i];
                i++;
            }
            else{
                nums[k] = right[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            nums[k] = left[i];
            i++;
            k++;
        }
        while(j<n2){
            nums[k] = right[j];
            j++;
            k++;
        }
    }
    void mergeSort(int low,int high,vector<int>& nums,int& reversePairs){
        if(low>=high) return;
        int mid = (low+high)/2;
        mergeSort(low,mid,nums,reversePairs);
        mergeSort(mid+1,high,nums,reversePairs);
        merge(low,high,mid,nums,reversePairs);
    }
    int reversePairs(vector<int>& nums) {
        int reversePairs = 0;
        mergeSort(0,nums.size()-1,nums,reversePairs);
        return reversePairs;
    }
};