#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {

    ofstream out("students.csv");

    out << "101,John,85\n";
    out << "102,Alice,90\n";
    out.close();

    ifstream in("students.csv");

    string line;

    cout << "CSV Contents:\n";

    while(getline(in, line)) {
        stringstream ss(line);
        string id,name,marks;

        getline(ss,id,',');
        getline(ss,name,',');
        getline(ss,marks,',');

        cout << "ID: " << id
             << " Name: " << name
             << " Marks: " << marks << endl;
    }

    cout << "\nCurrent Position: "
         << in.tellg() << endl;

    in.close();
}
