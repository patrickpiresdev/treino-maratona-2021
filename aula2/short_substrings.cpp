#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int t;
    string b;
    string a;

    cin >> t;

    for (int i=0; i<t; i++) {
        cin >> b;

        a.push_back(b[0]);
        for (int j=1; j<b.length(); j+=2) {
            a.push_back(b[j]);
        }

        cout<<a<<endl;
        a.clear();
    }

    return 0;
}
