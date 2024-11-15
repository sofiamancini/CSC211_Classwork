#include <iostream>

unsigned int string_len(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}

bool palindrome(char str[]) {

    int length = string_len(str)-1;
    for(int i = 0; i <= length/2; i++) {
        if(str[i] != str[length-i]) {
            return false;
        }
    }

    return true; 
}

int main() {
    char myString[] = "what";
    if(palindrome(myString) == true) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }
    
}