#include <iostream>

int main() {
    // ���������� ��������� ���������� �� ���� ������ + �������� �����
    //------------------------------------------------------------
    std::string firstNumber, secondNumber;
    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    while (firstNumber.length() != 4
        || firstNumber[0] < '0' || firstNumber[0] > '9'
        || firstNumber[1] < '0' || firstNumber[1] > '9'
        || firstNumber[2] < '0' || firstNumber[2] > '9'
        || firstNumber[3] < '0' || firstNumber[3] > '9') {
        std::cout << "Error!\n";
        std::cout << "Input first number: ";
        std::cin >> firstNumber;
    }

    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    while (secondNumber.length() != 4
        || secondNumber[0] < '0' || secondNumber[0] > '9'
        || secondNumber[1] < '0' || secondNumber[1] > '9'
        || secondNumber[2] < '0' || secondNumber[2] > '9'
        || secondNumber[3] < '0' || secondNumber[3] > '9') {
        std::cout << "Error!\n";
        std::cout << "Input second number: ";
        std::cin >> secondNumber;
    }

    // ������������� ������������� ���������� ����� � ����� + ������� + ����� ������
    //------------------------------------------------------------
    int bulls = 0, cows = 0;
    for (int i = 0; i < 4; ++i) {

        for (int j = 0; j < 1; ++j) { // ���������� ���-�� �����
            if (secondNumber[i] == firstNumber[i]) {
                bulls++;
            }
        }

        for (int j = 0; j < 4; ++j) { // ���������� ���-�� �����
            if (secondNumber[i] != firstNumber[i]
                && secondNumber[j] != firstNumber[j]
                && secondNumber[i] == firstNumber[j]) {
                cows++;
                break;
            }
        }

    }
    std::cout << "Buuls = " << bulls << ", " << "cows = " << cows << "\n\n";;
    return 0;
}