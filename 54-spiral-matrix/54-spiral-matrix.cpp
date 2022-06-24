class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();  //rows
        int m=matrix[0].size();  //colms
        int sr=0,er=n-1,sc=0,ec=m-1;  //sr=starting row
            while(sr<=er && sc<=ec){           //er=ending row      
            for(int col=sc;col<=ec;col++)
                ans.push_back(matrix[sr][col]);
                sr++;

            for(int row=sr;row<=er;row++)
                ans.push_back(matrix[row][ec]);
                ec--;
            if(sr<=er){   
            for(int col=ec;col>=sc;col--)
                ans.push_back(matrix[er][col]);
                er--;
            }
            if(sc<=ec){ 
                    for(int row=er;row>=sr;row--)
                        ans.push_back(matrix[row][sc]);
                        sc++;
            }

        }
    return ans;        
      }
};