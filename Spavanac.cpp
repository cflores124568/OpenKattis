//
//  Spavanac
//
//  Created by chrisflores on 12/22/20.
//

#include <iostream>

using namespace std;

int main(){
    int H = 0;
    int M = 0;
    cin >> H >> M;
    M -= 45;
    if(M < 0){
        M += 60;
        if(H == 0){
            H = 23;
        }
        else{
            H -= 1;
        }
    }
    cout << H << " " << M << "\n";
}
