// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        //if searches through the end of the first integer, set this to 1
        bool end = 0; 
        for(int i = 0; i<matrix.size(); i++){
            if(target<=matrix[i][0]){
                if(i==0){
                    return target==matrix[row][0];
                    return false;
                }
                row = i;
                break;
            }
            if(i==matrix.size()-1) end =1;
        }
        
        if(end){
            for(int x = 0; x<matrix[matrix.size()-1].size(); x++){
                if(target==matrix[matrix.size()-1][x]){
                    return true;
                }
            }
            return false;
        }
        for(int j=0; j<matrix[row-1].size(); j++){
                    //cout<<matrix[i-1][j];
                    if(target==matrix[row-1][j]){
                        return true;
                    }
                    //row = i;
        }
        return target==matrix[row][0];
    }
};