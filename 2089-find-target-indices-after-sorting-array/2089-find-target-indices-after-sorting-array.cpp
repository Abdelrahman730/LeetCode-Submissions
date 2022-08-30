class Solution {
public:
    
    int binarySearch (vector<int>& x, int k)
    {
        int l = 0, r = x.size()-1;
        while (l <= r) {
            int m = (l+r)/2;
            
            if (x[m] == k) 
                return m;
            if (x[m] < k) 
                l = m+1; 
            else 
                r = m-1;
        }
        return 0;
    }
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin() , nums.end());
        
        vector <int> arr;
        
        int index = binarySearch(nums , target);
        
        for (int i = index - 1 ; i >= 0 ; i--)
        {
            if (nums[i] == target)
                arr.insert(arr.begin(), 1, i);
            else
                break;
        }
        
        for (int i = index ; i < nums.size() ; i++)
        {
            if (nums[i] == target)
                arr.push_back(i);
            else
                break;
        }
        
        sort(arr.begin() , arr.end());
            
        return arr;
    }
};