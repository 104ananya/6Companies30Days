class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
      vector<vector<int>> points = {p1, p2, p3, p4};
      set <long> length;
      
      for(int i = 0; i< 3; i++ ){
          for(int j = i+1; j < 4; j++){

              int p1x = points[i][0];
              int p2x = points[j][0];
              int p1y = points[i][1];
              int p2y = points[j][1];

              long distsqu = (p2x - p1x)*(p2x - p1x) + (p2y - p1y)*(p2y - p1y);

              if(distsqu != 0){
                  length.insert(distsqu);
              }
              else{
                  return false; //overlapping points
              }  
               
          }
      }

      return length.size() == 2;
        
    }
};
