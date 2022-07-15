#TODO: DOSN"T WORK RN  ======>

from operator import truediv
from typing import List

from matplotlib.pyplot import grid

#Assigning the value to visitedMap as the map of 2 by 2 array that keep in track of what the grid have gone through.
visitedMap = List[List[int]]

class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        #dimensions initialized. TODO MAYBBE ITS FLIPPED?, don't matter in a square case though
        h = len(grid[0])
        v = len(grid)


        #initialize the visitedMap: (with Falses.)
        visitedMap = [[False]* h for i in range(v)]

        # lOOP:
        for i in range(h):
            for j in range(v):
                #Recursions:
                newMax_ = recursivelyDefine(i,j,grid[i][j],visitedMap[i][j],0)
                if(newMax_ > max_):
                    max_ = newMax_
        return newMax_
    


"""
Returns the size of the island recursively.

variables:
    gridValue: the value of the grid, could be 1 or 0;
    visited: if the block have already been found.
    maximum: the size of the island at the moment.
"""
def recursivelyDefine(hCord: int, vCord: int, gridValue: int, visited : bool, maximum: int) -> int:
    print(hCord, " ", vCord)
    #Cases for out of bounds.
    if(hCord < 0 or hCord > len(grid)):
        return maximum
    if(vCord < 0 or vCord > len(grid[0])):
        return maximum

    # Base case: if the input is a 0 grid. Return.
    if(gridValue == 0):
        # don't do anything.
        return maximum
    elif(visited):
        return maximum
    else:
        #Increase maximum since its 1 and not visited. then recusion on that.
        maximum+=1
        visitedMap[hCord][vCord] == True
        # grid value is 1 and not visited.
        #Up
        recursivelyDefine(hCord,vCord-1,grid[hCord][vCord-1],visitedMap[hCord][vCord-1],maximum)
        #Down
        recursivelyDefine(hCord,vCord+1,grid[hCord][vCord+1],visitedMap[hCord][vCord+1],maximum)
        #Left
        recursivelyDefine(hCord-1,vCord,grid[hCord-1][vCord],visitedMap[hCord-1][vCord],maximum)
        #Right
        recursivelyDefine(hCord+1,vCord,grid[hCord+1][vCord],visitedMap[hCord+1][vCord],maximum)

