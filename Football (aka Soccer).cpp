//
// Created by Alejandro  Otero on 2019-11-17.
//

/*{
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class team{
public:
    string name;
    int gplayed, wins, ties, loses, gscored, gagainst, points, games, gd;
    team(string n):name(n){
        gplayed = wins = ties = loses = gscored = gagainst = points = games = gd = 0;
    }
};

int main() {
    int n, tnum, gnum, a, b, i=1;
    string tname, pname, pname2, in;
    vector<team*> res;
    cin >> n;
    cin.ignore();
    for(int x=0; x<n;x++){
        getline(cin,tname);
        unordered_map<string,team*> teamMap;
        cin >> tnum;
        cin.ignore();
        for(int w=0 ;w<tnum;w++){
            getline(cin,pname);
            team* newT = new team(pname);
            teamMap[pname] = newT;
        }
        cin >> gnum;
        cin.ignore();

        for(int y=0; y<gnum; y++){
            getline(cin,in);
            istringstream iss(in);
            getline(iss,pname,'#');
            getline(iss,in,'@');
            a = stoi(in);
            getline(iss,in,'#');
            b = stoi(in);
            getline(iss,pname2);
            teamMap[pname]->gscored += a;
            teamMap[pname]->gagainst += b;
            teamMap[pname2]->gscored += b;
            teamMap[pname2]->gagainst += a;
            if(a == b){
                teamMap[pname]->ties +=1;
                teamMap[pname2]->ties +=1;
            } else if(a > b){
                teamMap[pname]->wins++;
                teamMap[pname2]->loses++;
            } else {
                ++teamMap[pname]->loses;
                ++teamMap[pname2]->wins;
            }
        }
        for(auto& p : teamMap) {
            p.second->games = p.second->ties + p.second->wins + p.second->loses;
            p.second->points = p.second->wins*3 + p.second->ties;
            p.second->gd = p.second->gscored - p.second->gagainst;
            res.push_back(p.second);
        }
        sort(res.begin(), res.end(), [](team* a, team* b){
            if(a->points != b->points)
                return a->points > b->points;
            if(a->wins != b->wins)
                return a->wins > b->wins;
            if(a->gd != b->gd)
                return a->gd > b->gd;
            if(a->gscored != b->gscored)
                return a->gscored > b->gscored;
            if(a->games != b->games)
                return a->games < b->games;
            string a_name = a->name;
            string b_name = b->name;
            transform(a_name.begin(),a_name.end(),a_name.begin(),::tolower);
            transform(b_name.begin(),b_name.end(),b_name.begin(),::tolower);
            return a_name < b_name;
        });
        cout << tname << endl;
        for(auto it=res.begin(); it!=res.end(); it++){
            cout<< i++ << ") " << (*it)->name<<" ";
            cout<<(*it)->points<<"p, "<<(*it)->games<<"g ("<<(*it)->wins<<"-"<<(*it)->ties<<"-"<<(*it)->loses<<"), "<<
                (*it)->gd<<"gd ("<<(*it)->gscored<<"-"<<(*it)->gagainst<<")"<<endl;
        }
    }
}
}