class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
       int n = points.size();
       int ans = 0;

       for(int i = 0; i< n; i++){

           unordered_map <long, int> mp;

           for(int j = 0; j < n; j++){

               if(i == j){
                   continue;
               }

               int p1x = points[i][0];
               int p2x = points[j][0];
               int p1y = points[i][1];
               int p2y = points[j][1];

               int distsqr = (p2x - p1x)*(p2x - p1x) + (p2y - p1y)*(p2y - p1y);

               mp[distsqr]++;  
           }

           for(auto it : mp){
                if(it.second > 1){
                  int temp = it.second*(it.second - 1);
                  ans += temp;     
                }
            }
       }

       return ans;
    }
};
