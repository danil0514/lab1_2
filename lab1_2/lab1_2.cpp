#include <iostream> 
#include <string>
using namespace std;

bool isUint(const std::string& s) {
    return s.find_first_not_of("0123456789") == std::string::npos;
}

void check_and_change_int(string& number) {
    bool input_switch=true;
    while (input_switch)
    {
        std::cout << "Введите число" << endl;
        std::getline(std::cin, number);
        if (number.empty())
            break;
        if (isUint(number))
        {
            input_switch = !input_switch;
        }
    }
}

void sumEvenlyOrOdd(string& number, int &sumEvenly, int &sumOdd) {
    int i;
    for (i = 0; i < number.length(); i++)
    {
        int n = number[number.length()-i-1] - '0';
        if ((i) % 2 == 0)
        {
            sumEvenly = sumEvenly + n;
        }
        else
        {
            sumOdd = sumOdd + n;
        }
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    string number;
    int sumEvenly=0;
    int sumOdd=0;
    check_and_change_int(number);
    sumEvenlyOrOdd(number, sumEvenly, sumOdd);
    if (sumEvenly > sumOdd)
    {
        std::cout << "Сумма чётные чисел больше, нечётных"<<endl;
    }
    else
    {
        std::cout << "Сумма нечётные чисел больше чётных"<<endl;
    }
    std::cout << "Сумма чётных чисел " << sumEvenly<<endl;
    std::cout << "Сумма не чётных чисел " << sumOdd << endl;
    return 0;
}
