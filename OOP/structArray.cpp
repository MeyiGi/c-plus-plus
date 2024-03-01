#include <iostream>
#include <locale.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


struct Element {
    string el;
    char top;
    char charge[3];
    double weight;
};

Element elements[3] = {
    { "Нейтрон", 'Н', " 0", 940},
    { "Ка-плюс", 'M', "+1", 494},
    { "Электрон", 'Л', "-1", 0.511},
};

// Print Functions
void print_line();
void print_headline();
void print_footer();
void print_row(Element);
string line = "+---------------------------------------------------------------------------------------------+";


int main() {
    setlocale(0, "Russian");
    print_headline();

    for (auto obj : elements)
        print_row(obj);

    print_footer();
    return 0;
}

void print_row(Element element) {
    print_line();

    cout << '|';

    cout << setw(20) << setfill(' ') << left << element.el << '|';
    cout << setw(20) << setfill(' ') << left << element.top << '|';
    cout << setw(25) << setfill(' ') << left << element.charge << '|';
    cout << setw(25) << setfill(' ') << left << element.weight << '|';

    cout << endl;
}


void print_line() {
    cout << setw(21) << setfill('-') << '+';
    cout << setw(21) << setfill('-') << '+';
    cout << setw(26) << setfill('-') << '+';
    cout << setw(26) << setfill('-') << '+';;

    cout << '+' << endl;
}







void print_headline() {
    vector<string> headline = { "Болукчо", "Топ", "Заряды", "Кыймылсыздык массасы" };

    cout << line << endl;
    cout << setw(94) << left << "|Жогорку каршылыкка ээ болгон эритмелер" << "|" << endl;
    print_line();

    cout << '|';

    cout << setw(20) << setfill(' ') << left << headline[0] << '|';
    cout << setw(20) << setfill(' ') << left << headline[1] << '|';
    cout << setw(25) << setfill(' ') << left << headline[2] << '|';
    cout << setw(25) << setfill(' ') << left << headline[3] << '|';

    cout << endl;
}







void print_footer() {
    print_line();
    cout << setfill(' ') << setw(94) << left << "|Болукчолордун топтору: Г - гиперондор, Н - нуклондор, М - мезондор, Л - лептондор" << "|" << endl;
    cout << line << endl;
}