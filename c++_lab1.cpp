#include <iostream>

using namespace std;

//void swapIntegers(int &a, int &b){
//    int num = a;
//    a=b;
//    b=num;
//}
//
//void swapIntegerPointers(int *c,int *d){
//    int num = *c;
//    *c=*d;
//    *d=num;
//
//}

//int main()
//{
//    int a =5;
//    int b=10;
//    int *c = &a;
//    int *d = &b;
//
//    printf("a: %d....b: %d \n",a,b);
//
//    swapIntegers(a,b);
//    printf("a: %d...b: %d \n",a,b);
//
//    swapIntegerPointers(c,d);
//    printf("a: %d....b: %d \n",*c,*d);
//
//    return 0;
//
//
//void partition(int arr[],int arrSize, int pivot){
//
//    for(int i=0;i<5;i++){
//            for(int j=0;j<5;j++){
//
//                if(arr[j] < pivot){
//
//                    if(arr[j]>arr[j+1]){
//                        int temp = arr[j];
//                        arr[j]= arr[j+1];
//                        arr[j+1] = temp;
//                    }
//                }
//
//                else if(arr[i] > pivot){
//
//                    if(arr[j]>arr[j+1]){
//                        int temp = arr[j];
//                        arr[j]= arr[j+1];
//                        arr[j+1] = temp;
//                    }
//                }
//            }
//    }
//}
//int main(){
//
//    int arr[] = {1,4,2,5,3};
//
//    partition(arr,5,3);
//
//    for(int i;i<5;i++)
//        cout << arr[i];
//
//
//    return 0;
//}


int main(){
    int y;
    int*yptr;
    yptr = &y;
    // &y = yptr; // It gives error. It is wrong to use it as a value.
    return 0;
}

int main(){
    int y, *yptr;
    // *yptr = 10; // Pointer does not hold the location of a value in the address
    yptr = &y;
    y = 5;
    *yptr = 10;
    cout << *yptr;

}

int main(){

    int data;
    const int* ptr;
    ptr = &data;
    cout<<ptr;
    // *ptr = 5; // Since ptr is a constant integer, the value is not assigned later.
}

int main()
{
    int data;
    int*const ptr = &data;
    *ptr = 5;
    //ptr = NULL; //Since ptr is constant, the value cannot be changed later
    int*const ptr2 = &data; // ptr2 needs to be assigned to a value's address.
}

int main(){

    int a, *b, **c;
    double x = 3.4, *y = &x;
    b = &a;
    c = &b;
    a = 5;
    **c = 20;
    *b = *y;
    // y = *b; // They are not of the same type, one int and one double
    // y = &a; // They are not of the same type, one int and one double
    // c = &a; // C int but pointer to pointer, they are not the same
    // *c = *b; // the types are different and c is the pointer of the pointer
    // b = 100000; // We cannot assign a value directly without using the * sign.
}

//int* bar(int* x, int& a, int** v) {
//// ...
//}
//int& foo( ) {
//// ...
//}
//int main() {
//int a, *b = &a, **c = &b, *d = *c, *e = b, f = **c, &g = a;
//*b = 3;
//**c = a;
//b = *c;
//c = &d;
//b = bar(&a, f, &d);
//e = bar(*c, *b, c);
//a = foo( );
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//    int x =4, y =5,*a =&x, *b =a, **c = &b;
//
//    cout<<"x: "<< &x<<endl;
//    cout<<"y: "<< &y<<endl;
//    cout<<"a: "<< &a<<endl;
//    cout<<"b: "<< &b<<endl;
//    cout<<"c: "<< &c<<endl;
//
//    cout<<"**c: "<< **c<<endl;
//    cout<<"*c: "<< *c<<endl;
//    cout<<"c: "<< c<<endl;
//    cout<<"&c: "<< &c<<endl<<endl;
//
//    b =&y;
//    *b =3;
//    cout<<"**c: "<< **c<<endl;
//    cout<<"*c: "<< *c<<endl;
//    cout<<"c: "<< c<<endl;
//    cout<<"&c: "<< &c<<endl<<endl;
//
//    cout<<"*&c: "<< *&c<<endl;
//    cout<<"&*c: "<< &*c<<endl;
//    cout<<"*&x: "<< *&x<<endl;
//
//
//    return 0;
//
//}
