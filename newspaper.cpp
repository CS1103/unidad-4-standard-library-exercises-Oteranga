//
// Created by Alejandro  Otero on 2019-11-05.
//

/*{
#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, K, M, l;
    map <char, float> valores;
    char c;
    string line;
    float v, total;

    cin>>n;
    while(n)
    {
        total = 0;
        cin>>K;
        for(int i = 0; i < K; i++){
            cin >> c >> v;
            valores[c] = v;
        }
        cin>>M;
        cin.ignore();
        map <char, float>::iterator it;
        for(int i = 0; i < M; i++){
            getline(cin, line);
            l = line.size();
            for(int j = 0; j < l; j++){
                it = valores.find(line[j]);
                if(it != valores.end())
                    total += it->second;
            }
        }
        total /= 100;
        cout<<total<<"$";
    }
    return 0;
}
}