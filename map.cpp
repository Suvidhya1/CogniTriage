#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<vector<int>>buildings={{1,3},{3,2},{3,3},{3,5},{5,3}};
    map<int, int> mapx;
        map<int, int> mapy;
        for (int i = 0; i < buildings.size(); i++) {
            mapx[buildings[i][0]]++;
            mapy[buildings[i][1]]++;
        }
        auto i = mapx.begin();
        auto j = mapy.begin();
        int ans = 0;
        for (; i != mapx.end() && j != mapy.end(); i++, j++) {
            cout<<i->first<<" "<<i->second<<"\n";
            cout<<j->first<<" "<<j->second<<"\n";
        }
}