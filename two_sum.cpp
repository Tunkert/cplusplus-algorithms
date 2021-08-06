#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
	vector<int> mySol;
	int difference;
	for(int i{ 0 }; i < nums.size(); i++)
	{
	    difference = target - nums[i];
	    for(int x{ 0 }; x < nums.size(); x++)
	    {
		if(difference == nums[x] && x != i)
		{
		    mySol.push_back(i);
		    mySol.push_back(x);
		    return mySol;
		}
	    }
	}
	return mySol;
    }
};

int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target{ 9 };
    Solution mySolution;
    vector<int> sol = mySolution.twoSum(nums, target);
    cout << "[";
    for (int y{ 0 }; y < sol.size(); y++)
    {
	if (y == sol.size() - 1)
	{
	    cout << sol.at(y);
	} else
	{
	    cout << sol.at(y) << ", ";
	}
    }
    cout << "]" << endl;
    return 0;
}
