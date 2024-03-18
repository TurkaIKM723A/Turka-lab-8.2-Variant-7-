#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "ukr");
   
    const int n = 6; 
    double arr[n] = { 2.5, 0, -3, 4, -2, 6 }; 

    // �)
    double prod_non_zero = 1.0; 

    for (int i = 0; i < n; ++i) {

        if (arr[i] != 0) {

            prod_non_zero *= arr[i]; 
        }
    }
    cout << "������� �������i�, �� �� ���i������ ����: " << prod_non_zero << '\n';
    cout << " " << '\n';

    // �)
    double prod_between_negatives = 1.0; 

    int firstNegativeIndex = -1;
    int secondNegativeIndex = -1;

    for (int i = 0; i < n; ++i) {

        if (arr[i] < 0) {

            if (firstNegativeIndex == -1) {

                firstNegativeIndex = i;

            }

            else {

                secondNegativeIndex = i;

                break;
            }
        }
    }

    if (firstNegativeIndex != -1 && secondNegativeIndex != -1) {

        for (int i = firstNegativeIndex + 1; i < secondNegativeIndex; ++i) {

            prod_between_negatives *= arr[i];

        }
    }

    else {

        prod_between_negatives = 0.0; 

    }

    cout << "������� �������i� ������, ������������ �i� ������ i ������ �i䒺����� ����������: " << prod_between_negatives << '\n';

    return 0;

}
