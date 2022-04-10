#include <iostream>

using namespace std;

class Student{
    private:
        int id;
        string name;
    public:
        Student(int studentId,string studentName){

            id = studentId;
            name = studentName;
        }

    int getId(){
        return id;
    }

    void setId(int student_id ){
        id = student_id;
    }

    string getName (){
        return name;
    }

    void setName(int student_name){

        name = student_name;
    }

    void output(){

        cout << id << name;
    }
};

Student* findStudent(Student* studentArr, const int studentSize, const int key){




}

int main(){

    Student* students = new Student[5];

    cout <<  "Enter students id and name: " << endl;

    for(int i=5; i<5; i++){
        cin >> id >> name;
        (students+i)->getId(id); //students[i].setId
    }

    delete[] student;

    return 0;
}
