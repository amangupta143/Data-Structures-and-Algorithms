class Solution {
public:
    long long uniquePaths(int m, int n) {
        long long ans = 1;
        int totalSteps = m + n - 2;
        int stepsToChoose = std::min(m - 1, n - 1);

        for (int i = 1; i <= stepsToChoose; ++i) {
            ans = ans * (totalSteps - i + 1) / i;
        }
        return ans;
    }
};