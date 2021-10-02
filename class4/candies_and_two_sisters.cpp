#include <iostream>
using namespace std;

int main() {
    int n, t, d;

    scanf("%d", &t);
    while (t>0) {
        d=0;
        scanf("%d", &n);

        if (n>2) {
            d = n - (n/2 + 1);
        }
        
        cout << d << endl;
        t--;
    }
}