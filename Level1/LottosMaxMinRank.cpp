#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;   
    int count = 0;
    int zero_num = 0;
    int all = 7;    
    for(int j = 0 ;j < lottos.size(); j++){
        if(lottos[j] == 0){
            zero_num++;
            continue;
        }
        
        for(int i = 0 ; i < win_nums.size(); i++){
            if(lottos[j] == win_nums[i]){
                count++;
                break;
            }
        }
    }
    int mRank = all - count;
    int nRank = all - count - zero_num;
    answer.push_back(min(nRank,6));
    answer.push_back(min(mRank,6));
    return answer;
}
