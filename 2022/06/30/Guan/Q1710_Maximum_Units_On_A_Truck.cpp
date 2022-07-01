// You are assigned to put some amount of boxes onto one truck. You are given a 2D array boxTypes, 
// where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:
// numberOfBoxesi is the number of boxes of type i.
// numberOfUnitsPerBoxi is the number of units in each box of the type i.
// You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck. 
// You can choose any boxes to put on the truck as long as the number of boxes does not exceed truckSize.
// Return the maximum total number of units that can be put on the truck.

//I pick this question because it ccame from the questions of the day.

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
    
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // I have a maximum value;
        // I wanna find the largest unit and then keep track of the maximum != 0
        //Once trucksize go down to zero, return it.

        //PATH 1:
        //Sort the boxTpye variable with the largest to smallest.
        //Keep track of truck size:
        // DEBUG:
        // for(int i = 0; i < boxTypes.size(); i++){
        //     cout << "[" << boxTypes[i][0] << " " << boxTypes[i][1] << "]" << endl;
        // }

        // I don't care about the first element of anything since its already sorted
        // I am onyl using it to caluclate the result.

        // while(truckSize > 0){
        //     for(int i = 0;)
        // }
        
        //TODO: What did I learned:
        // I learned how to use lambda and how to apply it into the sort function?

        sort(boxTypes.begin(),boxTypes.end(), [](vector<int> a, vector<int>b){
            return a[1] > b[1];
        });


        int result = 0;
        for(int i = 0; i < boxTypes.size(); i++){
            if(truckSize > 0){
                if(boxTypes[i][0] >= truckSize){
                    result += truckSize * boxTypes[i][1];
                    return result;
                }
                else{
                    //Box type is smaller:
                    truckSize -= boxTypes[i][0];
                    result += boxTypes[i][0] * boxTypes[i][1];
                }
            }
            else{
                break;
            }
        }
        return result;


    }
};