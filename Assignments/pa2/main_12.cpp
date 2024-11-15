#include <iostream>
 

std::string decToHexa(int n)
{
    std::string final = "";
    if (n == 0) {
        return "00";
    }
    while (n != 0) {
        int rem = 0;
         
        char ch;
        rem = n % 16;
 
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }
         
        final += ch;
        
        n = n / 16;
    }
     
    int i = 0, j = final.size() - 1;
    while(i <= j)
    {
      std::swap(final[i], final[j]);
      i++;
      j--;
    }
    if (final.size() == 1) {
        final = "0" + final;
    }
    return final;
}

int main()
{
    int r, g, b;
    std::cin >> r >> g >> b;
 
    std::cout << '#' << decToHexa(r) << decToHexa(g) << decToHexa(b) << std::endl;
 
    return 0;
}