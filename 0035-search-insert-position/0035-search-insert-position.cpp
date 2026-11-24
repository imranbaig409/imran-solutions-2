class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            
            if(nums[mid] == target) {
                return mid;          // Target found
            } else if(nums[mid] < target) {
                left = mid + 1;      // Ignore left half
            } else {
                right = mid - 1;     // Ignore right half
            }
        }
        
        return left;               // Insertion position
        
    }
};