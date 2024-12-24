#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> findTwoSum(vector<int> &nums, int target);
vector<int> findTwoSumUnorderdMap(vector<int> &nums, int target);
int main(){
    vector<int> nums = {2,7,11,5};
    vector<int> twoSum = findTwoSum(nums, 9);
    for(int i = 0; i < twoSum.size(); i++){
        cout << "index :: " << twoSum[i] << " ";
    }
    twoSum = findTwoSumUnorderdMap(nums,9);
     for(int i = 0; i < twoSum.size(); i++){
        cout << "index :: " << twoSum[i] << " ";
    }
}

//two For loop method
vector<int> findTwoSum(vector<int> &nums, int target){
    vector<int> twoSum;
    bool f = false;
    for(int i = 0; i < nums.size() && !f; i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(target = nums[i] + nums[j]){
                f = true;
                twoSum = {i,j};
                break;
            }
        }
    }
    return twoSum;
}

//hasmap mehod
vector<int> findTwoSumUnorderdMap(vector<int> &nums, int target){
    vector<int> twoSum;
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++){
        int c = target - nums[i];
        if(map.find(c) != map.end()){
            twoSum = {map[c], i};
            break;
        }
        map[nums[i]] = i;
    }
    return twoSum;
}
