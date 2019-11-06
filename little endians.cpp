//
// Created by Alejandro  Otero on 2019-11-05.
//

/*{
  #include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    int num,x;
    while(cin >> num){
        for (int i=0; i<4; i++){
            x = (x<<8) | ((num>>(8*i))&255);
        }
        cout<<num<<" converts to "<<x<< endl;
    }
    return 0;
}
}