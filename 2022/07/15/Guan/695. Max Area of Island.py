class Solution:
    
    def __init__(self):
        self.value = 0
    
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        
        #get the horizontal and verticle coordinates.
        h = len(grid[0])
        v = len(grid)
        
        #initialize the visitedMap: (with Falses.)
        visitedMap = [[0]* (v) for i in range(h)]
        
        # print(v,h)
        # print("VISITED MAP SIZE IS:","v: ", len(visitedMap[0]), "h:", len(visitedMap))
        # v=8,h=13
        
        #We already have the grid for the grids.
        
        #Create the vairable that keep track of the max area.
        abs_max_area = 0
        local_max = 0
        #Call the functions:
        for i in range(h):
            for j in range(v):
                self.value = 0
                abs_max_area = max(self.r_check(i,j,grid,visitedMap,local_max),abs_max_area)
                # if(abs_max_area == 5):
                #     print(i,j)
        
        # self.value = 0
        # abs_max_area = max(self.r_check(1,1,grid,visitedMap,local_max),abs_max_area)
        
        #Return that area.
        return abs_max_area

    
    def r_check(self, i:int, j: int,grid: List[List[int]],visited: List[List[int]], value):
        
#         if(i == 3 and j == 8):
#             print(i,j,value)
        
        
        
        #TODO: UHHH THIS... FIX WORKS FOR NOW.
        h = len(grid[0])
        v = len(grid)
        
        # print(h,v)
        if(i>=h or j>=v or i<0 or j<0):
            pass
        #If the function detects an non-visited island.
        elif(grid[i][j] == 1 and visited[i][j] == 0):
            print(i,j,value)
            #increase value of the area.
            value+=1
            #change visited to true
            visited[i][j] = 1
            #check the closer areas too.
            self.value = max(value,self.value)
            self.r_check(i-1,j,grid,visited,value)
            self.r_check(i+1,j,grid,visited,value)
            self.r_check(i,j-1,grid,visited,value)
            self.r_check(i,j+1,grid,visited,value)
        # print(value,i,j)
        return self.value
    
    def print_array(array_: List[List[int]]):
        for i in range(len(array_)):
            for j in range(len(array_[0])):
                print(i,j)