class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
        }
        sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     if(i==k){
                
        //     }
        // }
        return v[v.size()-k];
        
    }
};
