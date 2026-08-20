#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    vector<int> v;
    while(t--){
        int x; cin >>x;
        v.push_back(x);
    }
    for(int i=0; i<v.size();i++){
        if(v[i]< 0){
            v[i] = 2;
        }
        else if(v[i]>0){
            v[i] = 1;
        }
    }

    for(int x : v){
        cout << x << " ";
    }

 
    return 0;
}