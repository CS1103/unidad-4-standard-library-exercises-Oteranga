//
// Created by Alejandro  Otero on 2019-11-06.
//

/*{
    #include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;


class D {
public:
    string proyecto;
    int alum;
};

bool cmp(const D i, const D j) {
    if(i.alum != j.alum)
        return i.alum > j.alum;
    return i.proyecto.compare(j.proyecto) < 0;
}

int main() {
        string proj, name;
        map<string, string> alumnos;
        map<string, set<string> > pro;
        getline(cin, proj);
        alumnos[""] = "-1";
        int idx = 0;
        D ans[100];
        while(1) {
            if(proj[0] == '0')
                return 0;
            if(proj[0] == '1')
                break;
            pro[proj].insert("");
            while(getline(cin, name)) {
                if(name[0] >= 'A' && name[0] <= 'Z' || name[0] == '1') {
                    proj = name;
                    break;
                }
                if(alumnos[name] == "" || alumnos[name] == proj) {
                    alumnos[name] = proj;
                    pro[proj].insert(name);
                } else {
                    alumnos[name] = "-1";
                }
            }
        }
        map<string ,set<string>>::iterator i;
        for(i = pro.begin(); i != pro.end(); i++) {
            int cnt = 0;
            set<string>::iterator j;
            for(j = i->second.begin(); j != i->second.end(); j++) {
                if(alumnos[*j] != "-1")
                    cnt++;
            }
            ans[idx].proyecto = i->first;
            ans[idx].alum = cnt;
            idx++;
        }
        sort(ans, ans+idx, cmp);
        for(int i = 0; i < idx; i++)
            cout << ans[i].proyecto << " " << ans[i].alum << endl;

        return 0;
}
}