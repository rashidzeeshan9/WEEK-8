#include <iostream>
#include <string>
using namespace std;

string str = "I am the student of the class of MCA";

bool findSubstring(string subStr, int startIndex) {
    for (int i = 0; i < subStr.length(); i++) {
        if (startIndex + i >= str.length() || str[startIndex + i] != subStr[i]) {
            return false; 
        }
    }
    return true;
}

void findOccurrence(string word) {
	int found = 0;
    for (int c = 0; c <= str.length() - word.length(); c++) { 
        if (str[c] == word[0]) {
            if (findSubstring(word, c)) {
            	found += 1;
                cout << "\nMatch found at index: " << c << endl;
            }
        }
    }
    cout << word << " is present " << found << " times";
}

int main(){
	string word;
	cout << str << endl;
	cout << "Enter a word : ";
	getline(cin , word);
	findOccurrence(word);
	return 0;
}
