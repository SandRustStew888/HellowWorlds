/* * * * * * * * * * * * * * * * * *
* Seth Andrus
* CIS 1202 201
* 2023/Dec/01
* Ecxeptinatiion part A
* * * * * * * * * * * * * * * * * */

#include<iostream>
#include<ctype.h>

using namespace std;

class invalidCharacterExcpeption {}; // name given in assignment
class invalidRangeException {};


/* * * * * * * * * * * * * * * * * *
* If start is not a letter (A-Z, a-z),
* throw an invalidCharacterExcpeption.
* If the target is not a letter,
* throw an invalidRangeException.
* Otherwise, return the letter
* described by the start and offset.
* Do not allow upper- and lower-case transitions.
* * * * * * * * * * * * * * * * * */
char character(char start, int offset){
    if ( !isalpha(start) ) {
        invalidCharacterExcpeption doug;
        throw doug;
    } else if ( abs(offset) > 26) { // keeps offset within the alphabet
        invalidRangeException louie;
        throw louie;
    }
    char temp = static_cast<char>(offset += static_cast<int>(start)); // all the casting may not be nessissary
    if ( isalpha(temp) ) {
        return temp;
    } else {
        invalidRangeException doug;
        throw doug;
    }
}


/* * * * * * * * * * * * * * * * * *
* tests charactor function fife times.
* * * * * * * * * * * * * * * * * */
int main() {

    char start;
    int offset;
    for (int i = 0; i < 5; i++) {
        cout << "Enter char : ";
        cin >> start;
        cout << "Enter offset : ";
        cin >> offset;
        try {
            cout << character(start, offset) << endl;
        }
        catch(invalidCharacterExcpeption){
            cout << "invalidCharacterExcpeption, use a different char ? \n";
        }
        catch(invalidRangeException) {
            cout << "invalidRangeException, use a smaller |offset| ?\n";
        }

    }


    return 0;
}
