class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;

        long long odd = 0, even = 1;
        long long prefixSum = 0, ans = 0;

        for(int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];

            if(prefixSum % 2 != 0) {
                ans = (ans + even) % MOD;
                odd++;
            }
            else {
                ans = (ans + odd) % MOD;
                even++;
            }
        }

        return ans;
    }
};