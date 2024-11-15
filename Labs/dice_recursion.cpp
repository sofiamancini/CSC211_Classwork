// This code will take an integer to represent a number of 6 sided dice and use recursion to output all possible combinations of dice rolls

#include <iostream>
#include <vector> 

// creates a vector to store the chosen values
void diceRollHelper(int dice, std::vector<int>& chosen);

// prints all possible outcomes of rolling the given dice
void diceRolls(int dice);

//create vector and call driver function
void diceRolls(int dice) { // dice = 2
    std::vector<int> chosen; // chosen = {}
    diceRollHelper(dice, chosen);
}

void diceRollHelper(int dice, std::vector<int>& chosen) {
// Base Case
if (dice == 0) {

    //Print out contents of vector {1,1}
    std::cout << "{";
        for(int i=0; i < chosen.size(); i++){
            std::cout << chosen.at(i);
            if(i < chosen.size() -1){
                std::cout << ",";
            }
        } 
    std::cout << "} \n";
}

//Recursive case
else {

    for (int i = 1; i <= 6; i++) {
        chosen.push_back(i); // choose value 
        diceRollHelper(dice - 1, chosen); // explore the remaining dice - recursive step
        chosen.pop_back(); // un-choose chosen = {}
        }
    }
}

int main(){

    diceRolls(2);

return 0;
}