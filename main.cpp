# include <iostream>

int main(){
    int age;
    int year;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter the current year: ";
    std::cin >> year;
    int birthYear = year - age;
    std::cout << "You were born in " << birthYear << std::endl;
    return 0;

}