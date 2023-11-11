#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int length) {
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    const int characters_length = characters.length();

    std::string password;
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < length; ++i) {
        password += characters[rand() % characters_length];
    }

    return password;
}

int main() {
    int passwordLength;
    std::cout << "Enter the length of the password: ";
    std::cin >> passwordLength;

    std::string password = generatePassword(passwordLength);
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}
