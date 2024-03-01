#include <iostream>
#include <locale.h>
#include <string>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;


class Element {
public:
    string el;
    char top;
    char charge[3];
    double weight;
};


class Database {
public:
    Element el_1;
    Element el_2;
    Element el_3;
};


// Print functions
void print_line();
void print_headline();
void print_footer();
void print_row(Element);
string line = "+---------------------------------------------------------------------------------------------+";


// Database Prototype
Database initializeDatabase();
Element Metal1(Element);
Element Metal2(Element);
Element Metal3(Element);


// Main function
int main() {
    setlocale(0, "ru");

    Database elDatabase = initializeDatabase();

    print_headline();

    print_row(elDatabase.el_1);
    print_row(elDatabase.el_2);
    print_row(elDatabase.el_3);

    print_footer();
    return 0;
}


// Print Functions
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


// Database
Element Metal1(Element obj) {
    obj.el = "Нейтрон";
    obj.top = 'Н';
    strcpy(obj.charge, " 0");
    obj.weight = 940;

    return obj;
}


Element Metal2(Element obj) {
    obj.el = "Ка-плюс";
    obj.top = 'M';
    strcpy(obj.charge, "+1");
    obj.weight = 494;

    return obj;
}

Element Metal3(Element obj) {
    obj.el = "Электрон";
    obj.top = 'Л';
    strcpy(obj.charge, "-1");
    obj.weight = 0.511;

    return obj;
}

Database initializeDatabase() {

    Database elementDatabase;

    elementDatabase.el_1 = Metal1({});
    elementDatabase.el_2 = Metal2({});
    elementDatabase.el_3 = Metal3({});

    return elementDatabase;
}