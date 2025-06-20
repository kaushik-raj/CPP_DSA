// leetcode link :- https://leetcode.com/problems/unique-number-of-occurrences/description/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr){
        int i=0;
        sort(arr.begin() , arr.end());
        vector<int> ans;
        while(i<arr.size()){
            int count = 0;
            int num = arr[i];
            for(int j=i; j<arr.size();j++){
                if(num==arr[j]){
                    count++;
                }
            }
            ans.push_back(count);
            i=i+count;

        }
        sort(ans.begin() , ans.end());
        for(int i=0 ; i<ans.size()-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};