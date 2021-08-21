#include <iostream>
using namespace std;

bool in_circle(int total, int c) {
    return c<=total;
}

bool are_neighbors(int a, int b) {
    return abs(a-b) == 1;
}

int whos_opposite(int a, int b, int c) {
    int diff  = abs(a-b);
    int total = diff*2;
    if (are_neighbors(a, b)) return -1;
    if (!in_circle(total, a)) return -1;
    if (!in_circle(total, b)) return -1;
    if (!in_circle(total, c)) return -1;
    if (c > diff) return c-diff;
    return c+diff;
}

int main() {
    int t;
    cin>>t;

    if (t<1 || t>10000) return 1;

    int ns[t][3];
    for(int i=0; i<t; i++) {
        cin>>ns[i][0]>>ns[i][1]>>ns[i][2];
        if (ns[i][0]<1 && ns[i][0]>100000000) return 1;
        if (ns[i][1]<1 && ns[i][1]>100000000) return 1;
        if (ns[i][2]<1 && ns[i][2]>100000000) return 1;
    }

    for(int i=0; i<t; i++) {
        cout<<whos_opposite(ns[i][0], ns[i][1], ns[i][2]);
        cout<<endl;
    }

    return 0;
}

