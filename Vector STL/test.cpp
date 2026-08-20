#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 3, 32, 3, 3};
  

    // v.insert(v.begin()+2,100);
    // replace(v.begin(),v.end()-1,3,100);

  auto it =  find(v.begin(),v.end(),100);

   if(it == v.end()){
    cout <<"not Found"<<endl;
   }
   else{
    cout<<"found" <<endl;
   }
    return 0;
}