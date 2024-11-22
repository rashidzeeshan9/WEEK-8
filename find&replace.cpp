#include <iostream>
#include <string>
using namespace std;

string str = "C++ is an amazing language to learn";


void replaceSubstring(int startIndex , int endIndex){
	string replaceStr;
	cout << "Enter a substring with which you want to replace: ";
	getline(cin , replaceStr);
	string newString = str.substr(0 , startIndex) + replaceStr + str.substr(endIndex);
	str = newString;
	cout << str;
}

bool findSubstring(const string &subStr, int startIndex) {
    for (int i = 0; i < subStr.length(); i++) {
        if (startIndex + i >= str.length() || str[startIndex + i] != subStr[i]) {
            return false; 
        }
    }
    return true;
}

void findFirstCharacter(const string &subStr) {
    for (int c = 0; c <= str.length() - subStr.length(); c++) { 
        if (str[c] == subStr[0]) {
            if (findSubstring(subStr, c)) {
                cout << "\nMatch found at index: " << c << endl;
                replaceSubstring(c , c + subStr.length());
            }
        }
    }
}

int main() {
    string subStr;
    cout << str << endl;
    cout << "Enter a substring you want to find: ";
    getline(cin, subStr);
    findFirstCharacter(subStr);
    return 0;
}
