#include <iostream>
using namespace std;

typedef struct Interval {
    int l;
    int r;
} Interval;

bool in_any_interval(int x, Interval* intervals, int n) {
    for (int i=0; i<n; i++) {
        if (intervals[i].l<=x && x<=intervals[i].r) return true;
    }
    return false;
}

int main(void) {

    int n, m, k=0;
    int numbersout[100];
    Interval* intervals;

    cin >>n>>m;
    intervals = (Interval*) malloc(sizeof(Interval)*n);

    Interval interval;
    for (int i=0;i<n;i++) {
        cin >>intervals[i].l>>intervals[i].r;
    }

    bool in_interval;
    for (int i=1;i<=m;i++) {
        in_interval = in_any_interval(i, intervals, n);
        if (!in_interval) numbersout[k++] = i;
    }

    cout<<k<<endl;
    for (int i=0;i<k;i++) {
        cout<<numbersout[i]<<" ";
    }

    return 0;
}
