#include <iostream>
using namespace std;

int numbers[200009], max_repetitions[200009], n, mrn;
bool diff_team[200009];

void count_max_repetitions() {
    for (int i=0; i<200009; i++) {
        max_repetitions[i] = 0;
    }
    
    int cur;
    for (int i=0; i<n; i++) {
        cur = numbers[i];
        max_repetitions[cur]++;
    }
}

int find_max_repetition() {
    int max = 0;
    int cur;
    for (int i=0; i<n; i++) {
        cur = numbers[i];
        if (max < max_repetitions[cur]) {
            max = max_repetitions[cur];
            mrn = cur;
        }
    }
    return max;
}

void initialize_diff_team() {
    int cur;
    for (int i=0; i<n; i++) {
        cur = numbers[i];
        diff_team[cur] = false;
    }
}

int main() {
    int x, t;
    scanf("%d", &t);
    
    while(t>0) {
        x=0;
        scanf("%d", &n);
        for (int i=0; i<n; i++) {
            scanf("%d", &numbers[i]);
        }
        if (n>1) {
            count_max_repetitions();
            int max_repetition = find_max_repetition();
            int max_repetition_tmp = max_repetition;

            initialize_diff_team();

            int cur;
            for (int i=0; i<n && max_repetition_tmp>0; i++) {
                cur = numbers[i];
                if (!diff_team[cur] && cur!=mrn) {
                    diff_team[cur] = true;
                    max_repetition_tmp--;
                }
            }
            if (max_repetition_tmp > 1) max_repetition_tmp--;
            x = max_repetition - max_repetition_tmp;
        }
        printf("%d\n", x);
        t--;
    }
}