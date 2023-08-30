#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#define INF 1e9
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define v2i vector<vector<int>>
#define v2b vector<vector<bool>>
#define v2ll vector<vector<long long>>
#define all(x) x.begin(),x.end()
using namespace std;
using ll = long long;


int main(){
    vector<char> s(4);
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]){
        cout << "Weak" << endl;
        return 0;
    }
    int cnt = 0;
    for(int i=0; i<3; i++){
        int a = s[i]-'0';
        int b = s[i+1]-'0';
        if(((a+1)%10)==b) cnt++;
    }
    if(cnt==3) cout << "Weak" << endl;
    else cout << "Strong" << endl;
    return 0;
}