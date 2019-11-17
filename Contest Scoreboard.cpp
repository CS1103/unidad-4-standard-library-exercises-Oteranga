//
// Created by Alejandro  Otero on 2019-11-17.
//

/*{
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <fstream>
#include <algorithm>

using namespace std;

int main ()
{
    int n,contestant,problem,time;
    cin >> n;
    cout<<endl;
    string s,st;
    int totalTime[101],problemCount[101];
    char stat;
    int elem [101][10];
    for(int a=0; a<n;a++)
    {
        memset (elem,0,sizeof(elem));
        while(cin>>contestant)
        {
            if (contestant == 0)
                break;
            cin >> problem;
            cin >> time;
            cin >> stat;
            if (stat == 'C')
                elem[contestant-1][problem-1] += time;
            else if (stat == 'I')
                elem[contestant-1][problem-1]+= 20;
        }
        for (int i = 0; i < 101; i++)
        {
            totalTime[i] = 0;
            problemCount[i] = 0;
            for (int j = 0; j < 10; j++)
            {
                totalTime[i] += elem[i][j];
                if(elem[i][j] != 0)
                    problemCount[i]++;
            }
            if(totalTime[i] != 0)
            {
                int j = i + 1;
                cout << j << " ";
                cout << problemCount[i]<< " ";
                cout << totalTime[i] <<endl;
            }
        }

    }
    return 0;
}
}