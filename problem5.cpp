#include <bits/stdc++.h>
using namespace std;
int main() {
    
    double a,b;
    char c;
    cin >> a >> c >> b;
   if (c=='+') cout << a+b;
   else if(c=='-') cout << a-b;
   else if(c=='*') cout << a*b;
   else cout << a/b;
    return 0;
}
