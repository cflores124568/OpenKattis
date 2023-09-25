//
//  OddManOut
//
//  Created by chrisflores on 12/31/20.
//

#include <iostream>
#include <map>

int main(){
    int N = 0;
    int G = 0;
    unsigned int C = 0;
    int odd_guest = 0;
    std::map<unsigned int, int> guest_map;
    
    std::cin>> N;
    for(int i = 0; i < N; ++i){
        std::cin >> G;
        for(int j = 0; j < G; ++j){
            std::cin >> C;
            ++guest_map[C];
        }
        for(std::map<unsigned int, int>::iterator guest_iter = guest_map.begin(); guest_iter != guest_map.end(); ++guest_iter){
            if(guest_iter->second == 1){
                odd_guest = guest_iter->first;
            }
        }
        std::cout << "Case #" << i + 1 << ": " << odd_guest << "\n";
        guest_map.clear();
    }
}
