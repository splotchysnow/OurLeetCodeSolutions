// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are considered permutations of arr: [1,2,3], [1,3,2], [3,1,2], [2,3,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.

// The replacement must be in place and use only constant extra memory.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int m = 1;
        int end = 0;
        priority_queue <int> pq;
        while(nums.size()>=m+1){
            pq = priority_queue <int>();
            end = nums[nums.size()-m];
            for(int a = nums.size()-2; a>nums.size()-(m+1); a--){
                pq.push(nums[a]);
            }
            for(int i = nums.size()-(m+1); i>=0; i--){
                if(nums[i]<end){
                    pq.push(nums[i]);
                    nums[i] = end;
                    for(int j = nums.size()-1; j>i; j--){
                        nums[j] = pq.top();
                        pq.pop();
                    }//cout<<m;
                    return;
                }else{
                    pq.push(nums[i]);
                }
            }
            m++;
        }    
        //cout<<m;
        pq = priority_queue <int>();
        for(int h = 0; h<nums.size(); h++){
            pq.push(nums[h]);
        }
            
        for(int k = nums.size()-1; k>=0; k--){
            nums[k] = pq.top();
            pq.pop();
        }
    }
};


class Solution {
public:
    int search(vector<int>& nums, int target) {
    }
};