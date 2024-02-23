/**
* @brief problems with commenting
*
*/


#include <iostream>
#include <string>


int main(){


///
/**
* @brief this program will take a string, and another string from cin (user input), and add them together
*	 outputting a single string
* @param s string one
* @param s1 string two
* @param a concatenated string
*
*/
std::string s, s1;
std::cout << "Enter a String: ";
std::cin >> s;
std::cout << "Enter a String: ";
std::cin >> s1;
std::string a = s + s1;
std::cout << "CAT STRING: " << a << std::endl;

return 0;
}
