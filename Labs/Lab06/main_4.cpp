#include <iostream>

void reverse(std::string& str)
{
    int n = str.length();
    char temp;
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++){
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;

    }

}
 
// Driver program
int main()
{
    std::string str = "HelloWorld!";
    reverse(str);
    std::cout << str;
    return 0;
}