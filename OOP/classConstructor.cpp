#include <iostream>
#include <locale.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Element {
private:
    string el;
    char top;
    string charge;
    double weight;
public:
    Element(string el, char top, string charge, double weight) {
        this->el = el;
        this->top = top;
        this->charge = charge;
        this->weight = weight;
    }

    string getEl()     { return el; }
    char getTop()      { return top; }
    string getCharge() { return charge; }
    double getWeight() { return weight; }
};

// Print functions
void print_line();
void print_headline();
void print_footer();
void print_row(Element);
string line = "+---------------------------------------------------------------------------------------------+";


// Main function
int main() {
    setlocale(0, "ru");

    // Initialize elements data
    Element obj_1("Нейтрон",  'Н', " 0", 940);
    Element obj_2("Ка-плюс",  'M', "+1", 494);
    Element obj_3("Электрон", 'Л', "-1", 0.511);

    // Printing on screent
    print_headline();

    print_row(obj_1);
    print_row(obj_2);
    print_row(obj_3);

    print_footer();
    return 0;
}



// Print Functions
void print_row(Element element) {
    print_line();
    cout << '|';

    cout << setw(20) << setfill(' ') << left << element.getEl() << '|';
    cout << setw(20) << setfill(' ') << left << element.getTop() << '|';
    cout << setw(25) << setfill(' ') << left << element.getCharge() << '|';
    cout << setw(25) << setfill(' ') << left << element.getWeight() << '|';

    cout << endl;
}


void print_line() {
    cout << setw(21) << setfill('-') << '+';
    cout << setw(21) << setfill('-') << '+';
    cout << setw(26) << setfill('-') << '+';
    cout << setw(26) << setfill('-') << '+';

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