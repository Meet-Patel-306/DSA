// Last updated: 18/08/2025, 18:39:22
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxArea=0;
        
        while(left<right){
            int a=min(height[left], height[right])*(right-left);
            maxArea=max(maxArea,a);
            if(height[left]<=height[right]){
                left++;
                }
            else{
                right--;
                }
            }
        return maxArea;
                     
    }
};