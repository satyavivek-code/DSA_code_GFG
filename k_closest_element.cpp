#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> kClosestElement(vector<int>&arr, int k, int x, int n){
    priority_queue<pair<int,int>>pq;

    for (int i = 0; i <n; i++) {
        pq.push({abs(arr[i]-x), arr[i]});
        if (pq.size() > k){
            pq.pop();
        }
    }
    vector<int>ans;
    while (pq.size() > 0){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

int main(){
    vector<int> arr = {12, 16, 22, 30, 35, 39, 42,45, 48, 50, 53, 55, 56};
    int size = arr.size();
    int k = 4;
    int x = 35;

    vector<int>sol = kClosestElement(arr, k, x, size);
    for (int i = 0; i < sol.size(); i++){
        cout <<sol[i] << " " ;
    }
    return 0;
}