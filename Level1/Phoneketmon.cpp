#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int max = nums.size();
    int answer = 0;
    int result[200000] = {0,};
    max /= 2;
    for(int i = 0; i < nums.size();i++)
    {
        result[nums[i]]++;
    }
    for(int i = 0 ; i < 200000 ; i++)
    {
        if(result[i] > 0)
            answer++;
    }
    
    if(answer > max)
        return max;
    
    return answer;
}
