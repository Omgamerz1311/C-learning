#include <iostream>


 namespace first { int x =10;}
namespace second { int x = 20; }




int main() { 
  
    
    double speed = 18.888;
    bool isStudent = true;
    char grade = 'A';
    std::string name = " Om Prajapati";
    const double PI = 3.145665445;

    std::cout << "hello  " << name << std::endl;
    std::cout << "You are" << first::x << "years old" << std::endl;
    std::cout << "your" << second::x << "rupees " << '\n';
    std::cout << "your speed is" << speed << std::endl;
    std::cout << "Are you a student? " << isStudent << std::endl;
    std::cout << "you scored " << grade << " in your exam" << std::endl;
    std::cout << "the value of PI " << PI << '\n';

    return 0;
}