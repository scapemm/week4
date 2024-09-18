#include <bits/stdc++.h>
using namespace std;
int main() {
    char a;
    double b;
    cin >> a >> b;
    if(a=='M'){
        if(b<1.7) cout << "Short";
        else if(b<1.85) cout << "Normal";
        else cout << "Tall";
    }
    else{
        if(b<1.6)cout <<"Short";
        else if(b<1.75) cout << "Normal";
        else cout << "Tall";
    }
    
    
    return 0;
}
