#ifndef askH
#define askH

bool isUint(const std::string& s) {
    return s.find_first_not_of("0123456789") == std::string::npos;
}

void check_and_change_int(string& number) {
    bool input_switch = true;
    while (input_switch)
    {
        std::cout << "¬ведите число" << endl;
        std::getline(std::cin, number);
        if (number.empty())
            break;
        if (isUint(number))
        {
            input_switch = !input_switch;
        }
    }
}