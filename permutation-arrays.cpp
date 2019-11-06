//
// Created by Alejandro  Otero on 2019-11-03.
//

/*{
    #include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>

using namespace std;

template <typename T>
void leer_primera(vector<T>& numbers)
{
    string line;
    getline(cin, line);
    istringstream is(line);
    numbers = vector<int>(istream_iterator<int>(is), istream_iterator<int>());
}

template <typename T>
void leer_segunda(vector<T>& numbers)
{
    T line;
    getline(cin, line);
    istringstream is(line);
    numbers = vector<T>(istream_iterator<T>(is), istream_iterator<T>());
}

int main()
{
    int n;
    string a;
    cin >> n;
    cout<<endl;

    for (int j=0; j<n;j++)
    {
        getline(cin, a);
        vector<int> vec;
        leer_primera(vec);
        vector<string> vec2;
        leer_segunda(vec2);

        vector<string> original(vec2.size());

        for (int i = 0; i < vec.size(); i++)
            original[vec[i]-1] = vec2[i];

        for (auto &v:original)
            cout<<v<<endl;
    }
}
}