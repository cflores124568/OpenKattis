//
//  JudgingMoose
//
//  Created by chrisflores on 12/26/20.
//

#include <iostream>

using namespace std;

int main(){
    int l = 0;
    int r = 0;
    int x = 0;
    cin >> l >> r;
    if(l == r && (l + r) != 0){
        x = l + r;
        cout << "Even " << x << "\n";
    }
    else if((l + r) == 0){
        cout << "Not a moose\n";
    }
    else if(l > r){
        x = 2 * l;
        cout << "Odd " << x << "\n";
    }
    else{
        x = 2 * r;
        cout << "Odd " << x << "\n";
    }
}
