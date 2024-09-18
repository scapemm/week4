#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> lst;
    for(int i=0; i<4; ++i){
        int a;
        cin >> a;
        lst.push_back(a);
    }
    lst.sort();
    lst.unique();
    cout << 4-lst.size();
    
    
    return 0;
}
