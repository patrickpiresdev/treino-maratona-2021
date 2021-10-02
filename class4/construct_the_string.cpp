#include <iostream>
using namespace std;

int main() {
    char s[2009];
    int n, a, b, t;

    scanf("%d", &t);

    while(t>0) {
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);

        for (int i=0; i<n;) {
            for (int k=0; k<b; k++) {
                s[i] = 97+k;
                i++;
            }
        }

        for (int i=0; i<n; i++) printf("%c", s[i]);
        printf("\n");
        t--;
    }
}