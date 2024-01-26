#include <iostream>
#include <cassert>
#include <string>
#include <sstream>

#define ASSERT_WITH_MSG(cond, msg) do \
{ if (!(cond)) { std::ostringstream str; str << msg; std::cerr << str.str(); } \
} while(0)

#include "../libs/TextFileHandler.h"
#include "../libs/List.h"

using namespace std;

string removeBlankSpacesFromString(string line);
bool isPalindrome(string line);
int countPalindromes(List<string> lines);
void testRemoveBlankSpacesFromString();
void testIsPalindrome();
void testCountPalindromes();

int main() {

    testRemoveBlankSpacesFromString();
    testIsPalindrome();
    testCountPalindromes();
    
    return 0;

}


string removeBlankSpacesFromString(string line) {
    
    //TODO: Implement this function to remove blank spaces from string
    return "";
}

bool isPalindrome(string line) {
    //TODO: Implement this function to check if a string is palindrome
    return false;
}

int countPalindromes(List<string> lines) {
    //TODO: Implement this function to count palindromes in a list of strings
    return 0;
}

void testRemoveBlankSpacesFromString() {
    
    cout << "===Checking first function: Remove blank spaces from string===" << endl;

    cout << "---Case 1: removing blank spaces of string with spaces" << endl;
    
    string lineCase1Test1 = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
    string expectedCase1Test1 = "abcdefghijklmnopqrstuvwxyz";
    string resultCase1Test1 = removeBlankSpacesFromString(lineCase1Test1);
    string errorMsgCase1Test1 = "Case 1 failed \n Expected: " + expectedCase1Test1 + " but got: " + resultCase1Test1 + "\n";

    ASSERT_WITH_MSG(resultCase1Test1 == expectedCase1Test1, errorMsgCase1Test1);
    
    cout<<endl;

    cout << "---Case 2: removing blank spaces of string without spaces" << endl;

    string lineCase2Test1 = "pig:oink";
    string expectedCase2Test1 = "pig:oink";
    string resultCase2Test1 = removeBlankSpacesFromString(lineCase1Test1);
    string errorMsgCase2Test1 = "Case 2 failed \n Expected: " + expectedCase2Test1 + " but got: " + resultCase2Test1 + "\n";

    ASSERT_WITH_MSG(resultCase2Test1 == expectedCase2Test1, errorMsgCase2Test1);
    
    cout<<endl;
}

void testIsPalindrome() {

    cout << "===Checking second function: Is palindrome===" << endl;

    cout << "---Case 1: Validating string of size 1 is palindrome" << endl;

    string lineCase1Test1 = "a";
    bool expectedCase1Test1 = true;
    bool resultCase1Test1 = isPalindrome(lineCase1Test1);

    string errorMsgCase1Test1 = "Case 1 failed \n Expected: " + to_string(expectedCase1Test1) + " but got: " + to_string(resultCase1Test1) + "\n";

    ASSERT_WITH_MSG(resultCase1Test1 == expectedCase1Test1, errorMsgCase1Test1);

    cout<<endl;

    cout << "---Case 2: Validating string of size 2 is palindrome" << endl;
    cout << "---Case 2.1: Validating string of size 2 is palindrome when both letters are equal" << endl;

    string lineCase2Test1 = "aa";
    bool expectedCase2Test1 = true;
    bool resultCase2Test1 = isPalindrome(lineCase2Test1);

    string errorMsgCase2Test1 = "Case 2.1 failed \n Expected: " + to_string(expectedCase2Test1) + " but got: " + to_string(resultCase2Test1) + "\n";

    ASSERT_WITH_MSG(resultCase2Test1 == expectedCase2Test1, errorMsgCase2Test1);

    cout<<endl;

    cout << "---Case 2.2: Validating string of size 2 is palindrome when both letters are different" << endl;

    string lineCase2Test2 = "ab";
    bool expectedCase2Test2 = false;
    bool resultCase2Test2 = isPalindrome(lineCase2Test2);

    string errorMsgCase2Test2 = "Case 2.2 failed \n Expected: " + to_string(expectedCase2Test2) + " but got: " + to_string(resultCase2Test2) + "\n";

    ASSERT_WITH_MSG(resultCase2Test2 == expectedCase2Test2, errorMsgCase2Test2);

    cout<<endl;

    cout << "---Case 3: Validating string of size n without spaces is palindrome" << endl;
    cout << "---Case 3.1: Validating string of size n without spaces is palindrome when a palindrome word is sent to function" << endl;

    string lineCase3Test1 = "anitalavalatina";
    bool expectedCase3Test1 = true;
    bool resultCase3Test1 = isPalindrome(lineCase3Test1);

    string errorMsgCase3Test1 = "Case 3.1 failed \n Expected: " + to_string(expectedCase3Test1) + " but got: " + to_string(resultCase3Test1) + "\n";

    ASSERT_WITH_MSG(resultCase3Test1 == expectedCase3Test1, errorMsgCase3Test1);

    cout<<endl;

    cout << "---Case 3.2: Validating string of size n without spaces is palindrome when a non palindrome word is sent to function" << endl;

    string lineCase3Test2 = "anitalavalatino";

    bool expectedCase3Test2 = false;
    bool resultCase3Test2 = isPalindrome(lineCase3Test2);

    string errorMsgCase3Test2 = "Case 3.2 failed \n Expected: " + to_string(expectedCase3Test2) + " but got: " + to_string(resultCase3Test2) + "\n";

    ASSERT_WITH_MSG(resultCase3Test2 == expectedCase3Test2, errorMsgCase3Test2);

    cout<<endl;

    cout << "---Case 4: Validating string blank is palindrome" << endl;

    string lineCase4Test1 = "";
    bool expectedCase4Test1 = true;
    bool resultCase4Test1 = isPalindrome(lineCase4Test1);

    string errorMsgCase4Test1 = "Case 4 failed \n Expected: " + to_string(expectedCase4Test1) + " but got: " + to_string(resultCase4Test1) + "\n";

    ASSERT_WITH_MSG(resultCase4Test1 == expectedCase4Test1, errorMsgCase4Test1);
}

void testCountPalindromes() {

    cout << "===Checking third function: Count palindromes===" << endl;

    cout << "---Case 1: Validating count of palindromes in empty list" << endl;

    List<string> linesCase1Test1;

    int expectedCase1Test1 = 0;
    int resultCase1Test1 = countPalindromes(linesCase1Test1);

    string errorMsgCase1Test1 = "Case 1 failed \n Expected: " + to_string(expectedCase1Test1) + " but got: " + to_string(resultCase1Test1) + "\n";

    ASSERT_WITH_MSG(resultCase1Test1 == expectedCase1Test1, errorMsgCase1Test1);

    cout<<endl;

    cout << "---Case 2: Validating count of palindromes in list with palindrome elements" << endl;

    TextFileHandler fileHandler("palindromes.txt");
    List<string> linesCase2Test1 = fileHandler.readLines();

    int expectedCase2Test1 = 5;
    int resultCase2Test1 = countPalindromes(linesCase2Test1);

    string errorMsgCase2Test1 = "Case 2 failed \n Expected: " + to_string(expectedCase2Test1) + " but got: " + to_string(resultCase2Test1) + "\n";

    ASSERT_WITH_MSG(resultCase2Test1 == expectedCase2Test1, errorMsgCase2Test1);

    cout<<endl;
}

