/*
 * @lc app=leetcode id=3577 lang=cpp
 *
 * [3577] Count the Number of Computer Unlocking Permutations
 */

// @lc code=start
class Solution {
public:
    int M = 1e9+7;

    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();

        long long result = 1;

        for(int i = 1; i < n; i++) {
            if(complexity[i] <= complexity[0])
                return 0;
            
            result = (result * i) % M;
        }
        
        return result;
    }
};
// @lc code=end

