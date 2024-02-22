// find a missing number in array//

#include<iostream>
using namespace std;

class Solution {
public:
    int missingNumber
	 {
	 	int nums;
        int res = nums.size();
        
        for (int i = 0; i < nums.size(); i++) {
            res += i - nums[i];
        }
        
        return res;        
    }
};



