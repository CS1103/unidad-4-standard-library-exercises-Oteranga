//
// Created by Alejandro  Otero on 2019-11-17.
//

/*{
#include <iostream>

using namespace std;

struct Order{
    int in, v;
};

template<typename T>
int cmp(const T *i, const T *j) {
    Order *a, *b;
    a = (Order *)i, b = (Order *)j;
    if(a->v != b->v)
        return a->v - b->v;
    return a->in - b->in;
}

int main() {
    int t, m, n;
    char dna[101][101];
    cin>>t;
    cout<<endl;
    for(int a=0; a<t; a++) {
        cin>>m>>n;
        Order D[101];
        for(int i = 0; i < n; i++) {
            cin>>dna[i];
            int sum = 0;
            for(int j = 0; j < m; j++) {
                for(int b = j+1; b < m; b++) {
                    if(dna[i][j] > dna[i][b]) {
                        sum++;
                    }
                }
            }
            D[i].v = sum, D[i].in = i;
        }
        qsort(D, n, sizeof(Order), cmp);
        for(int i = 0; i < n; i++) {
            cout<<dna[D[i].in]<<endl;
        }
    }
    return 0;
}
}