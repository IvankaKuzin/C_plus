#include <iostream>
#include <string>
#include <algorithm>

class StringArray {
private:
    std::string* strings;
    int size;

public:
    StringArray(int size) {
        this->size = size;
        strings = new std::string[size];
    }

    void fillFromKeyboard() {
        for (int i = 0; i < size; i++) {
            std::cout << "Enter string #" << i + 1 << ": ";
            std::getline(std::cin, strings[i]);
        }
    }

    void sortStrings() {
        std::sort(strings, strings + size);
    }

    void countWords() {
        for (int i = 0; i < size; i++) {
            std::string str = strings[i];
            int count = 0;
            bool inWord = false;
            for (char c : str) {
                if (isspace(c)) {
                    inWord = false;
                }
                else if (!inWord) {
                    inWord = true;
                    count++;
                }
            }
            std::cout << "\nString #" << i + 1 << " has " << count << " words.\n";
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << strings[i] << "\n";
        }
    }

    ~StringArray() {
        delete[] strings;
    }
};

int main() {
    std::cout << "Enter the number of strings: ";
    int size;
    std::cin >> size;

    // ігнорувати новий рядок, що залишилося у вхідному буфері 
    std::cin.ignore();

    StringArray array(size);

    array.fillFromKeyboard();
    std::cout << "\nUnsorted strings:\n";
    array.print();

    array.sortStrings();
    std::cout << "Sorted strings:\n";
    array.print();

    array.countWords();
    return 0;
}
