#include <iostream>
using namespace std;

int main() {
    int i=1;
    int j=1;
    int n=1;
    int k;
    cin>>k;


    while(true) {
        int linha_atual = 1;
        while(linha_atual<i) {
            if(++n == k) {
                cout<<i<<" "<<j<<endl;
                break;
            }
            linha_atual++;
        }
        i=linha_atual;

        int coluna_atual = j;
        while(coluna_atual>0) {
            if(++n == k) {
                cout<<i<<" "<<j<<endl;
                break;
            }
            coluna_atual++;
        }
        j=coluna_atual;
    }
    

    return 0;
}