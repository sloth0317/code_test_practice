#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> arr_sort;
    
    for (int i = 0; i < commands.size(); i++) {
        arr_sort.resize(commands[i][1]-commands[i][0] +1);
        copy(array.begin() + commands[i][0] -1  ,array.begin() + commands[i][1], arr_sort.begin());        
        sort(arr_sort.begin(),  arr_sort.end());
        
        answer.push_back(arr_sort[commands[i][2] - 1]);
        
		arr_sort.clear();
	}
    
    return answer;
}
