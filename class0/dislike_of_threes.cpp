#include <iostream>
#include <string>
using namespace std;

void dislike_of_threes(int k) {
    int p = 1;
    int n = 1;
    string s;
    while(p<=k) {
        s = to_string(n);
        if (n%3 != 0 && s[s.length() - 1] != '3') p++;
        n++;
    }

    cout<<--n<<endl;
}

int main() {
    int t;
    cin>>t;

    if (t<1 || t>100) return 1;

    int ns[t];
    for(int i=0; i<t; i++) {
        cin>>ns[i];
    }

    for(int i=0; i<t; i++) {
        dislike_of_threes(ns[i]);
    }

    return 0;
}
