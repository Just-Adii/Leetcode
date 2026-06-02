class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size();
      int i,j;
      int sum;
      for(i=0;i<n-1;i++)
      {
        for(j=i+1;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                break;
            }
        }
        if(sum==target)
        break;
      }  
      return{i,j};
    }
};