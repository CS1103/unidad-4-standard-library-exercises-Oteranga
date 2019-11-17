//
// Created by Alejandro  Otero on 2019-11-06.
//

/*{
#include <stdio.h>
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n;
    int bill;
    int precio;
    multiset<int> valores;
    while(cin>>n,n!=0) {
        int total=0;
        for (int i = 0; i < n; i++) {
            cin >> bill;
            for (int j = 0; j < bill; j++) {
                cin >> precio;
                valores.insert(precio);
            }

            multiset<int>::iterator lowest = valores.begin();
            multiset<int>::iterator biggest = --valores.end();

            total += *biggest - *lowest;
            valores.erase(lowest);
            valores.erase(biggest);
        }
        cout << total << endl;
    }
    return 0;
}
}