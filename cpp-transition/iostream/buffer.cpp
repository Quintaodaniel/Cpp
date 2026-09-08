#include <iostream>
#include <string>
#include <limits> // for buffer manipulation

int main() {
    int idade;
    std::cout << "Entre com sua idade: ";
    std::cin >> idade;
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string nome;
    std::cout << "Entre com seu nome: ";
    std::getline(std::cin, nome);
 
    std::cout << "Nome: " << nome << ", Idade: " << idade << ".\n";

    return 0;
}