#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>

using namespace std;

void reverseWord(string word) {
    cout << "Слово задом наперед: ";
    for (int i = word.length() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << endl;
}

void removeVowels(string word) {
    cout << "Слово без гласных: ";
    for (char c : word) {
        if (tolower(c) != 'а' && tolower(c) != 'у' && tolower(c) != 'о' && tolower(c) != 'ы' && tolower(c) != 'э' && tolower(c) != 'я' && tolower(c) != 'ю' && tolower(c) != 'ё' && tolower(c) != 'и' && tolower(c) != 'е') {
            cout << c;
        }
    }
    cout << endl;
}

void removeConsonants(string word) {
    cout << "Слово без согласных: ";
    for (char c : word) {
        if (tolower(c) == 'а' || tolower(c) == 'у' || tolower(c) == 'о' || tolower(c) == 'ы' || tolower(c) == 'э' || tolower(c) == 'я' || tolower(c) == 'ю' || tolower(c) == 'ё' || tolower(c) == 'и' || tolower(c) == 'е') {
            cout << c;
        }
    }
    cout << endl;
}

void shuffleWord(string word) {
    cout << "Перемешанные буквы в слове: ";
    random_shuffle(word.begin(), word.end());
    cout << word << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string word;
    int choice;
    bool runs = true;

    while (runs) {
        cout << "Меню:" << endl;
        cout << "1. Слово задом наперед." << endl;
        cout << "2. Слово без гласных." << endl;
        cout << "3. Слово без согласных." << endl;
        cout << "4. Случайно перемешанные буквы в слове." << endl;
        cout << "Выберите действие (1-4): ";
        cin >> choice;

        cout << "Введите слово: ";
        cin >> word;

        switch (choice) {
        case 1:
            reverseWord(word);
            break;
        case 2:
            removeVowels(word);
            break;
        case 3:
            removeConsonants(word);
            break;
        case 4:
            shuffleWord(word);
            break;
        default:
            cout << "Введена некорректная цифра" << endl;
        }

        cout << "Хотите продолжить? (1 - да, 0 - нет): ";
        cin >> runs;
    }

    return 0;
}
