给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。

你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。

示例:

给定 nums = [2, 7, 11, 15], target = 9 因为 nums[0] + nums[1] = 2 + 7 = 9 所以返回 [0, 1]
C语言暴力法

int* twoSum(int* nums, int numsSize, int target) {

    int i,j;
    int *pArray = 0;
    pArray = malloc(2*sizeof(int));

    for(i = 0; i < numsSize; ++i)
   {
       for(j = i+1; j < numsSize; ++j)
       {
          if((nums[i] + nums[j]) == target)
          {
             *(int*)pArray = i;
             *((int*)pArray+1) = j;
             return  pArray;
          }
       }
   }
    return 0;
}

C＋＋二次哈希
class Solution {
public:
    vector twoSum(vector& nums, int target) {
       vector twoSum;
       map tmpMap;
       for(int i=0; i
       {
          tmpMap[nums[i]] = i;
       }
       for(int i=0;i
       {
          if((tmpMap.count(target - nums[i]) != 0) && (tmpMap[target - nums[i]] != i))
          {
             twoSum.push_back(i);
             twoSum.push_back(tmpMap[target - nums[i]]);
             break;
          }
       }
       return twoSum;
   }
};

C++一次哈希

class Solution {
public:
    vector twoSum(vector& nums, int target) {
       vector twoSum;
       map tmpMap;
       for(int i=0;i
       {
          if(tmpMap.count(nums[i]) != 0)
          {
             twoSum.push_back(tmpMap[nums[i]]);
             twoSum.push_back(i);
             break;
          }
          tmpMap[target - nums[i]] = i;
       }
       return twoSum;
   }
};
