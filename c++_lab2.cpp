#include <iostream>

using namespace std;

//void partition ( int arr[], int arrSize, int pivot){
//
//    int i =0;
//    for(int j=0; j<arrSize-1;j++){
//        if(arr[j]<pivot){
//            int temp = arr[j];
//            arr[i] = arr[j];
//            a
//        }
//    }
//
//
//}
//int main()
//{
//    int numbers [] = {14,2,8,3,5};
//    int n = sizeof(numbers) / sizeof(numbers[0];
//
//    int pi
//    return 0;
//}
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

        cout << "Id is: " << id << ". Name is: " << name;
    }
};

void swapStudents(Student& S1,Student& S2){

    int temp = S1.getId();
    S1.setId(S2.getId());
    S2.setId(temp);

}

int main(){
    Student S(123,"student_S"),R(789,"student_R");

    cout << "Before Swapping: ";

    S.output();
    R.output();

    swapStudents(S,R);
    cout << "After Swapping: ";

    S.output();
    R.output();

    return 0;
}


