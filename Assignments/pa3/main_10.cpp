// This code will return the domain name of the given URL

#include <iostream>
#include <string>

// This function will change any upper case letters to lower case

void to_lower(std::string &input) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + 32;
        }
    }
}

// This function will remove any 'http://' or 'https://' from the input string

void remove_http(std::string &input) {
    if (input.find("://") != std::string::npos) {
        input.erase(0, input.find("://") + 3);
    } else if (input.find("https://") != std::string::npos) {
        input.erase(0, 8);
    }
}

// This function will remove any ':' and any characters after it from the input string

void remove_colon(std::string &input) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == ':') {
            input.erase(i, input.size() - i);
            break;
        }
    }
}

// This function will remove any '/' and any characters after it from the input string

void remove_slash(std::string &input) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '/') {
            input.erase(i, input.size() - i);
            break;
        }
    }
}

int main() {
    std::string url;
    std::getline(std::cin, url);

    to_lower(url);
    remove_http(url);
    remove_colon(url);
    remove_slash(url);

    std::cout << url << std::endl;
    return 0;
}