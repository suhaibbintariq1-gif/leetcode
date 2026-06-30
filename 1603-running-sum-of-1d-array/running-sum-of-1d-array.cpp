class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i=0; i<n; i ++){
          int currsum=0;
          for(int j=0; j<=i; j ++){
            currsum += nums[j];
          } 
            ans.push_back(currsum);
        }
        
        return ans;
    }

};