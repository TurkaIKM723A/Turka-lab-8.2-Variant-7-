#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "ukr"); 

    const int n = 10; 
    double arr[n] = {12, 3, 7, 9, 1, 0, 10, 32, 4, 22};  

    bool has_duplicates = false; 

    for (int i = 0; i < n - 1; ++i) {

        for (int j = i + 1; j < n; ++j) {

            if (arr[i] == arr[j]) {

                has_duplicates = true; 

                break;

            }
        }

        if (has_duplicates) {

            break; 

        }
    }

    if (has_duplicates) {

        cout << "У масиві є однаковi числа." << '\n';
    }

    else {

        cout << "У масивi немає однакових чисел." << '\n';

    }

    return 0;

}

