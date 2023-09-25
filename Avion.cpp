//
//  main.cpp
//  AVION
//
//  Created by chrisflores on 12/21/20.
//

#include <iostream>
#include <vector>

using namespace std;
int main(){
    const int MAX_BLIMPS = 5;
    string blimp;
    vector<int> blimp_list;
    for(int i = 0; i < MAX_BLIMPS; i++){
        cin >> blimp;
        if(blimp.find("FBI") != -1){
            blimp_list.push_back(i);
        }
    }
    if(blimp_list.size() > 0){
        for(int j = 0; j < blimp_list.size(); j++){
            cout << blimp_list[j] + 1 << " ";
        }
    }
    else{
        cout << "HE GOT AWAY!";
    }
}
