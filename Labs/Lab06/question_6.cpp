#include <iostream>
#include <string>

int main() {

    std::string string1 = "Hello ";
    std::string string2 = "World";

    string1.insert(5, string2);

    //the first parameter is the index to insert the other string
    //the second parameter is what to insert at that index

    std::cout << string1;





    return 0;
}