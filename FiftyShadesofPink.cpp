//
//  FiftyShadesofPink
//
//  Created by chrisflores on 12/19/20.
//

#include <iostream>

using namespace std;

int main(){
    int N = 0;
    int number_of_training_sessions = 0;
    string color;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> color;
        for(int j = 0; j < color.length(); j++){
            color[j] = tolower(color[j]);
        }
        if(color.find("pink") != -1 || color.find("rose") != -1){
            number_of_training_sessions++;
        }
    }
    if(number_of_training_sessions == 0){
        cout << "I must watch Star Wars with my daughter\n";
    }
    else{
        cout << number_of_training_sessions << "\n";
    }
}
