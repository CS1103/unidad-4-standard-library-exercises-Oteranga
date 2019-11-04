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
    int n,l;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>l;
        int trains[l];
        for (int j=0;j<l;j++){
            cin>>trains[j];
        }
        int cont=0;
        int temp=0;
        bool swap;
        do{
            swap=false;
            for(int x=0;x<l-1;x++){
                if(trains[x]>trains[x+1]){
                    cont++;
                    temp=trains[x];
                    trains[x]=trains[x+1];
                    trains[x+1]=temp;
                    swap=true;
                }
            }
        }while(swap);
        cout<<"Optimal train swapping takes "<<cont<<" swaps"<<endl;
    }
    return 0;
}
}