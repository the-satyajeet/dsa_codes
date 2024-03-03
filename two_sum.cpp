#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for(int i = 0; i < n; ++i) {
            int complement = target - nums[i];
            if(umap.count(complement)) {
                return {umap[complement], i};
            }
            umap[nums[i]] = i;
        }
        return{};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 2, 4}; // testcase: [3,2,4], 6 | [2,7,11,15], 9
    int target = 7;
    vector<int> ans = obj.twoSum(nums, target);
    for(auto itr: ans) {
        cout<<itr<<" ";
    }
}
