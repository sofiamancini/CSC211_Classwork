#include<iostream>
#include<string>

  int main()
  {
    std::string chef ("food");
    std::string customer ("money");
    // Strings declare original values
    std::cout << "Before the purchase the chef has " << chef;
    std::cout << " and customer has " << customer << '\n';

    chef.swap (customer);
    // swaps the string contained in chef with the one from customer
    std::cout << " After the swap the chef has " << chef;
    std::cout << " and customer has " << customer << '\n';
    //Now the print statement has flipped 
  return 0;
}
