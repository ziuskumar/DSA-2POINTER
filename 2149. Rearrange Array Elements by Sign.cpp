class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);

        int posidx = 0, negidx = 1;

        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                ans[negidx] = nums[i];
                negidx += 2;
            }
            else{
                ans[posidx] = nums[i];
                posidx += 2;
            }
        }
        return ans;
    }
};













// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
        
//         vector<int> pos, neg;
//         vector<int> ans;

//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] > 0){
//                 pos.push_back(nums[i]);
//             }
//             else{
//                 neg.push_back(nums[i]);
//             }
//         }

//         for(int i=0; i<nums.size()/2; i++){

//             nums[2*i] = pos[i];
//             nums[2*i+1] = neg[i];
//         }

//         return nums;
//     }
// };
