class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 1;

        for(int i = 0; i < n-1; i++){

            unordered_map <double, int> mp;

            for(int j = i + 1; j < n; j++){
                
                int p1x = points[i][0];
                int p2x = points[j][0];
                int p1y = points[i][1];
                int p2y = points[j][1];
                
                if(p1y == p2y){
                    mp[INT_MAX]++;
                }
                else{
                    double slope = double(p2x - p1x)/double(p2y - p1y);
                    mp[slope]++;
                }
            }

            int collinear = 0;

            for(auto it : mp){
                collinear = max(collinear, it.second + 1);
            }

            ans = max(ans, collinear);

        }

        return ans;
    }
};
