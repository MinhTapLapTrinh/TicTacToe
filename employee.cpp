#include <iostream>
#include <iomanip>
using namespace std;
class Employee{
    private:
    string name,department,position;
    int idNumber;
    public:
    Employee(string name, int idNumber, string department, string position){
        this -> name = name;
        this -> idNumber = idNumber;
        this -> department = department;
        this -> position = position;
    }
    Employee(string name, int idNumber){
        this -> name = name;
        this -> idNumber = idNumber;
        this-> department = "";
        this -> position = "";
    }
    Employee(){
        this -> name = "";
        this -> idNumber = 0;
        this-> department = "";
        this -> position = "";
    }
    string setName(string name){
        this -> name = name;
    };
    string getName(){
        return this->name;
    };
    int setIdNumber(int idNumber){
        this->idNumber = idNumber;
    };
    int getIdNumber(){
        return this-> idNumber;
    };
    string setDepartment(string department){
        this-> department = department;
    };
    string getDepartment(){
        return this-> department;
    };
    string setPosition(string position){
        this->position = position;
    };
    string getPosition(){
        return this -> position;
    };
    void nhap();
    void xuat();

};
void Employee :: nhap(){
    cout << "Nhap ten: ";getline(cin, this->name);
    cout << "nhap id: ";
    cin >> this -> idNumber;
    cin.ignore();
    cout << "Nhap bo phan: ";
    getline(cin, this-> department);
    cout << "Nhap vi tri: ";
    getline(cin, this-> position);
}

void Employee :: xuat(){
    cout << left << setw(30) << getName() << "\t";
    cout << left << setw(9) << getIdNumber() << "\t"; 
    cout << left << setw(15) << getDepartment() << "\t";
    cout << left << setw(20) << getPosition() << "\n";
}
int main(){
    Employee a("Susan Meyers", 47899, "Accouting","Vice President");
    Employee b("Mark Robber", 47899, "IT", "Programmer");
    cout << left << setw(30) << "Name" << "\t";
    cout << left << setw(9) << "Id Number" << "\t";
    cout << left << setw(15) << "Department" << "\t";
    cout << left << setw(20) << "Position" << endl;
    a.xuat();
    b.xuat();
    return 0;
}