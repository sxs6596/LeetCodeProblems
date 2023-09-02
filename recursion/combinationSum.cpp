#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

vector<vector<int>> combinationSum(int index, vector<int>&candidates, int target, vector<int>temp){
    vector<vector<int>> ans;
    // base case 
    if(index == candidates.size()){
        if(target == 0){
            ans.push_back(temp);
        }
        return ans;
    }

    // recursive call.
    //1. pick the index element 
    if(candidates[index] <= target){
        temp.push_back(candidates[index]);
        vector<vector<int>> res1 = combinationSum(index, candidates, target - candidates[index], temp);
        ans.insert(ans.end(), res1.begin(), res1.end());
        temp.pop_back();
    }
    // 2. don't pick the index element
    vector<vector<int>> res2 = combinationSum(index + 1, candidates, target, temp);
    ans.insert(ans.end(), res2.begin(), res2.end());
    return ans;
}

void printResult(vector<vector<int>> ans){
    for(auto & it : ans){
        cout << "[";
        for(auto & it2 : it){
            cout << it2 << " ";
        }
        cout << "]";
    }
}

int main(){
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(0, candidates, target, {});
    printResult(ans);
    return 0;
}