class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>toreturn;
        do { 
             toreturn.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return toreturn;
    }
};
