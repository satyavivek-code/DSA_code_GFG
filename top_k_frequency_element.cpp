#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

// typedef pair<int, int>ppi;

vector<int>kFrequency(int arr[], int k, int n){
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int, int>>>ppm;
    for (auto i=mp.begin();i!=mp.end();i++){
        ppm.push({i->second,i->first});
        if (ppm.size() > k){
            ppm.pop();
        }
    }
    vector<int>ans;
    while(ppm.size() > 0){
        ans.push_back(ppm.top().second);
        ppm.pop();
    }
    return ans;
}

int main(){
    int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    vector<int> sol = kFrequency(arr, k, size);
    for (int i = 0; i < sol.size(); i++){
        cout << sol[i] << " ";
    }
    return 0;
}