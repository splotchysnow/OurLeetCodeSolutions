#include <cstddef>
#include <type_traits>
#include <iostream>
#include <typeinfo>

#include <vector>
#include <set>
// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row, column, zero, three, six;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(!(board[i][j]=='.')){
                    if(row.count(board[i][j])==0){
                        row.insert(board[i][j]);
                    }else{
                        return false;
                    }
                    
                    if(j<=2){
                        if(zero.count(board[i][j])==0){
                            zero.insert(board[i][j]);
                        }else{
                            return false;
                        }
                    }else if(j<=5){
                        if(three.count(board[i][j])==0){
                            three.insert(board[i][j]);
                        }else{
                            return false;
                        }
                    }else{
                        if(six.count(board[i][j])==0){
                            six.insert(board[i][j]);
                        }else{
                            cout<<"3";
                            return false;
                        }
                    }
                }
                if(!(board[j][i]=='.')){
                    if(column.count(board[j][i])==0){
                        column.insert(board[j][i]);
                    }else{
                        return false;
                    }
                }
            }
            row.clear();
            column.clear();
            if(i==2||i==5){
                zero.clear();
                three.clear();
                six.clear();
            }
        }
        return true;
    }
};