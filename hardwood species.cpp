//
// Created by Alejandro  Otero on 2019-11-04.
//

/*{
    #include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    int n,cont=0;
    cin>>n;
    cout<<endl;

    for(int i=0; i<n;i++){
        string a;
        map<string,int> arboles;
        if(i==0)
            getline(cin,a);
        while(getline(cin,a)){
            if(a.length()==0)
                break;
            else
                arboles[a]++;
            cont++;
        }
        map<string,int>::iterator it;
        for(it=arboles.begin();it!=arboles.end();it++){
            cout<<it->first<<" "<<fixed<<setprecision(4)<<it->second*100.0/cont<<endl;
        }
    }

    return 0;
}
}