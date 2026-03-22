class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i}); // store value + index
        }

        sort(arr.begin(), arr.end());

        int l = 0, r = arr.size() - 1;

        while(l < r){
            int sum = arr[l].first + arr[r].first;

            if(sum == target){
                return {arr[l].second, arr[r].second};
            }
            else if(sum < target){
                l++;
            }
            else{
                r--;
            }
        }
        return {-1, -1};
    }
};




// BETTER

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int,int> mpp;
//         int n = nums.size();

//         for(int i=0; i<n; i++){

//             int more = target - nums[i];

//             if(mpp.find(more) != mpp.end()){
                
//                 return {mpp[more], i};
//             }

//             mpp[nums[i]] = i;
//         }
//         return{-1,-1};
//     }

// };




// BRUTEEEEEEEEEEEEEEE

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         int n = nums.size();
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 int sum = nums[i] + nums[j];

//                 if(sum == target){
//                     return {i,j};
//                 }
//             }
           
//         }
//         return{-1,-1};
        
//     }
// };

