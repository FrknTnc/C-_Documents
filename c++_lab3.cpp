#include <iostream>

using namespace std;

struct Employee{
    string name;
    int id;
    int salary;
    int hours_worked;

};

void takeEmployeeInformation(Employee* emp,int n){

    for(int i=0; i<n ; i++){

        cout << "Enter Name: ";
        cin >> (emp+i)->name;

        cout << "Enter id: ";
        cin >> (emp+i)->id;

        cout << "Enter Salary: ";
        cin >> (emp+i)->salary;

        cout << "Enter Hours : ";
        cin >> (emp+i)->hours_worked;
    }
}
void displayEmployeeInformation(Employee* emp,int n){

    for(int i=0; i<n ; i++){

        cout << (emp+i)->name << endl;
        cout << (emp+i)->id << endl;
        cout << (emp+i)->salary << endl;
        cout << (emp+i)->hours_worked << endl;
    }

}


int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    Employee* employees = new Employee[n];

    takeEmployeeInformation(employees, n);
    displayEmployeeInformation(employees, n);

    return 0;
}
