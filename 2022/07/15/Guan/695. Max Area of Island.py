# from collections import List
from typing import List
from unicodedata import name
from pip import main

class Solution:
    
    def __init__(self):
        self.value = 0
        self.h = 0
        self.v = 0
        #initialize the visitedMap: (with Falses.)
        self.visitedMap = []
        
    
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        
        #get the horizontal and verticle coordinates.
        self.h = len(grid[0])
        self.v = len(grid)
        self.value = 0
        self.visitedMap = [[0]*50 for i in range(50)]
        
        #Create the vairable that keep track of the max area.
        abs_max_area = 0
        local_max = 0
        
        # Recursion
        for i in range(self.v):
            for j in range(self.h):
                self.value = 0
                abs_max_area = max(self.r_check(i,j,grid),abs_max_area)
        return abs_max_area

    
    def r_check(self, i:int, j: int,grid: List[List[int]]) -> int:
        #If the function detects an non-visited island.
        if((i<self.v and j<self.h and i>=0 and j>=0) and grid[i][j] == 1 and self.visitedMap[i][j]==0):
            #change visited to true
            self.visitedMap[i][j] = 1
            #increase value of the area.
            self.value+=1
            # print("["+str(i)+"]","["+str(j)+"]",self.value)
            #check the closer areas too.
            self.r_check(i-1,j,grid)
            self.r_check(i,j-1,grid)
            self.r_check(i+1,j,grid)
            self.r_check(i,j+1,grid)
        
        return self.value

def main():
    a = Solution()

    gri1 = [[0,0,1,0,0,0,0,1,0,0,0,0,0],
            [0,0,0,0,0,0,0,1,1,1,0,0,0],
            [0,1,1,0,1,0,0,0,0,0,0,0,0],
            [0,1,0,0,1,1,0,0,1,0,1,0,0],
            [0,1,0,0,1,1,0,0,1,1,1,0,0],
            [0,0,0,0,0,0,0,0,0,0,1,0,0],
            [0,0,0,0,0,0,0,1,1,1,0,0,0],
            [0,0,0,0,0,0,0,1,1,0,0,0,0]]
    
    gri2 = [[1,0,1,0,0,0,0,1,0,0,0,0,0],
            [1,0,0,0,0,0,0,1,1,1,0,0,0],
            [1,1,1,0,1,0,0,0,0,0,0,0,0],
            [1,1,0,0,1,1,0,0,1,0,1,0,0],
            [1,1,0,0,1,1,0,0,1,1,1,0,0],
            [1,0,0,0,0,0,0,0,0,0,1,0,0],
            [0,0,0,0,0,0,0,1,1,1,0,0,0],
            [0,0,0,0,0,0,0,1,1,0,0,0,0]]

    print(a.maxAreaOfIsland(gri1))
    print(a.maxAreaOfIsland(gri2))

if __name__ == "__main__":
    main()