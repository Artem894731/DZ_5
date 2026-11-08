#include <iostream>
#include <cstring>

void count_characters(const char* str, int& letters, int& digits, int& spaces, int& other) {
    letters = 0;
    digits = 0;
    spaces = 0;
    other = 0;

    for (int i{}; str[i] != '\0'; ++i) {
        char c = str[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            letters++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else {
            other++;
        }
    }
}

int main()
{
    char str[] = "Hello 123!";
    int letters{}, digits{}, spaces{}, other{};
    count_characters(str, letters, digits, spaces ,other);
    std::cout << "Input string: " << str << "\nLetters: " << letters << "\nDigits: " << digits << "\nSpaces: " << spaces << "\nOthers: " << other << '\n';

}