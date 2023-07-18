#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int>v;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    int cur_inx= v.size()-1;
    while (cur_inx !=0 )
    {
        
        int parent_ind=(cur_inx-1)/2;
        if(v[parent_ind]> v[cur_inx])
         swap(v[parent_ind], v[cur_inx]);
         else 
         break;

        cur_inx=parent_ind;
    }
    
}
for(auto vl:v){
    cout<<vl<<" ";
}


    return 0;
}