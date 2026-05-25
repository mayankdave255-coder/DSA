class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> range;
        for(int i=0;i<=nums.size();i++){
            range.push_back(i);            
        }
        for(int i=0;i<nums.size();i++){
            range[nums[i]]=-1;
        }
        for(int i=0;i<range.size();i++){
            if(range[i]>=0){
                return range[i];
            }
        }
        return 0;
    }
};





class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int num : nums) sum += num;
        return total - sum;
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0;
        int n = nums.size();
        // XOR all numbers from 0 to n
        for (int i = 0; i <= n; ++i) xor1 ^= i;
        // XOR with all elements in nums
        for (int num : nums) xor1 ^= num;
        return xor1;
    }
};