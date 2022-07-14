import List;

class Solution:
    def escapeGhosts(self, ghosts: List[List[int]], target: List[int]) -> bool:
        #The d abs distance of target.
        d = abs(target[0]) + abs(target[1])
        
        #Get through all ghosts.
        for ghost in ghosts:
            #Distance is the difference in targetx from ghost minius distance in targety ghost.
            distance = abs(target[0] - ghost[0]) + abs(target[1] - ghost[1])
            
            if distance <= d:
                return False
            
        return True