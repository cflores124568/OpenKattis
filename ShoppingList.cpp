//
//  main.cpp
//  ShoppingList(Easy)
//
//  Created by chrisflores on 6/17/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main(int argc, const char * argv[]) {
    int n = 0;
    int m = 0;
    int repeated_grocery_count = 0;
    std::string grocery;
    std::vector<std::string> grocery_list;
    std::map<std::string, int> repeated_groceries;
    std::vector<std::string> repeated_grocery_list;
    
    std::cin >> n >> m;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            std::cin >> grocery;
            grocery_list.push_back(grocery);
        }
    }
    
    for(std::vector<std::string>::iterator grocer_iter = grocery_list.begin(); grocer_iter != grocery_list.end(); ++grocer_iter){
        ++repeated_groceries[*grocer_iter];
    }
    
    for(std::map<std::string, int>::iterator grocery_iter = repeated_groceries.begin(); grocery_iter != repeated_groceries.end(); ++grocery_iter){
        if(grocery_iter->second == n){
            ++repeated_grocery_count;
            repeated_grocery_list.push_back(grocery_iter->first);
        }
    }
    
    std::sort(repeated_grocery_list.begin(), repeated_grocery_list.begin());
    
    std::cout << repeated_grocery_count << "\n";
    for(std::vector<std::string>::iterator repeated_grocery_iter = repeated_grocery_list.begin(); repeated_grocery_iter != repeated_grocery_list.end(); ++repeated_grocery_iter){
        std::cout << *repeated_grocery_iter << "\n";
    }
}
