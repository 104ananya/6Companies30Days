class Solution {
public:

    void combo(int ind, int k, int n, vector<int> &temp, vector<vector<int>> &ans){

        if(n<0 || k < 0){
            return;
        }

        if(n ==0 && k == 0){
            ans.push_back(temp);
            return;
        }    

        for(int i = ind; i <=9; i++){
            temp.push_back(i);
            combo(i+1, k-1, n-i, temp, ans);
            temp.pop_back(); // backtracking 
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        int ind = 1;

        combo(ind, k, n, temp, ans);

        return ans;
    }
};
