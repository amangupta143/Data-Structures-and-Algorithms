class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        const int vmin=-5*1e4, N=1e5+1;
        int freq[N]={0}, xMax=-1, xmin=N;
        for(int x:nums) {
            x-=vmin;
            freq[x]++;
            xMax=max(x, xMax);
            xmin=min(x, xmin);
        }
        for(int i=0, x=xmin; x<=xMax; x++){
            int f=freq[x];
            fill(nums.begin()+i, nums.begin()+i+f, x+vmin);
            i+=f;
        }
        return nums;
    }
};