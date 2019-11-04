//
// Created by Alejandro  Otero on 2019-11-02.
//

/*{
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string id;

    while (cin >> id, id != "#")
    {
        if (next_permutation(id.begin(), id.end()))
            cout << id << endl;
        else
            cout << "No Successor"<<endl;
    }

}
}