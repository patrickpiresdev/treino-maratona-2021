#include <iostream>
using namespace std;

int main(void) {
    int t, n, a, paridade, npares = 0, nimpares = 0;

    cin>>t;

    for (int i=0; i<t; i++) {
        cin>>n;
        for (int j=0; j<n; j++) {
            cin>>a;
            paridade = a%2;
            if (j%2 != paridade) {
                if (paridade == 0) npares++;
                else nimpares++;
            }
        }
        if (npares == nimpares) cout << npares;
        else cout << -1;
        cout<<endl;
        npares = 0;
        nimpares = 0;
    }

    return 0;
}
