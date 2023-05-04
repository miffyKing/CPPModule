#include <iostream>

int main()
{
  std::string str;
  str = "HI THIS IS BRAIN";
  std::string* stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "address of str : " << &str << "\n";
  std::cout << "address of stringPTR: " << &stringPTR << "\n";
  std::cout << "address of stringREF: " << &stringREF << "\n";

  std::cout<<"\n";
  std::cout<< "Value of str : " << str<< "\n";
  std::cout<< "Value of stringPTR : " << stringPTR<<"\n";
  std::cout<< "Value of stringREF : " << stringREF<<"\n"; 

  return 0;
}
