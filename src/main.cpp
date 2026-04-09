#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

int main() {
    std::string input;
    std::cout << "Entre com a sua data de nascimento (dd/mm/aaaa): ";
    std::getline(std::cin, input);

    int day, month, year;
    char delimiter;

    std::istringstream iss(input);
    if (!(iss >> day >> delimiter >> month >> delimiter >> year) || delimiter != '/') {
        std::cerr << "Formato de data inválido. Por favor, use dd/mm/aaaa." << std::endl;
        return 1;
    }

    // Obtendo a data atual
    std::time_t t = std::time(nullptr);
    std::tm* currentTime = std::localtime(&t);
    
    int currentYear = currentTime->tm_year + 1900;
    int currentMonth = currentTime->tm_mon + 1;
    int currentDay = currentTime->tm_mday;

    // Calculando a idade
    int age = currentYear - year;
    if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        age--;
    }

    std::cout << "Sua idade é: " << age << " anos." << std::endl;

    return 0;
}