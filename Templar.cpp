/* * * * * * * * * * * * * * * * * *
* Seth Andrus
* CIS 1202 201
* 2023/Dec/01
* Templar de Templton part B
* * * * * * * * * * * * * * * * * */

#include<iostream>


using namespace std;

/* * * * * * * * * * * * * * * * * *
* return half of the value passed in as argument.
* * * * * * * * * * * * * * * * * */
template <typename T>
T half(T num){
    return num/2;
}
/* * * * * * * * * * * * * * * * * *
* For integer types (int), return half the value,
* rounded according to usual rounding rules
* * * * * * * * * * * * * * * * * */
int half(int num){
    int temp = num/2;
    if (num%2){ // if num is odd, we will have %2 of 1 or decimal .5, thus round up.
        return temp+1;
    } // else it is even and needs no rounding.
    return temp;
}


/* * * * * * * * * * * * * * * * * *
* from assignment
* * * * * * * * * * * * * * * * * */
int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}
