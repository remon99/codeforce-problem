#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,mid;
    cin>>a>>b>>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    cout<<abs(v[1]-v[0])+abs(v[1]-v[2]);
}