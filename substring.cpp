#include <iostream>
#include <string.h>
using namespace std;

string mainString = "The cat is under the table";

string insertSubstring(){
	string subString;
	int position;
	cout << "Enter a substring : ";
	cin.ignore();		// Clear the newline left in the input buffer
	getline(cin , subString);
	cout << "\nAt which position you want to insert your substring : ";
	cin >> position;
	if(position > mainString.length() || position < 0){
		string errorMsg = "Invalid position entered";
		return errorMsg;
	}
	else{
		mainString = mainString.substr(0,position) + subString + mainString.substr(position);
		return mainString;
	}
}

string deleteCharacters() {
    int position, n;
    cout << "\nFrom which position you want to delete characters: ";
    cin >> position;
    cout << "How many characters you want to delete: ";
    cin >> n;

    if (position < 0 || position >= mainString.length()) {
        return "Invalid position entered";
    } else {
        size_t maxDeletable = mainString.length() - position;
        if (n > maxDeletable) {
            string errorMsg = "Maximum ";
            if (maxDeletable - 1 < 0) {
                errorMsg += "0";
            } else {
                int number = maxDeletable - 1;
                string numStr;
                bool isNegative = number < 0;
                
                if (isNegative) {
                    number = -number;
                }

                do {
                    numStr.insert(numStr.begin(), '0' + (number % 10));
                    number /= 10;
                } while (number > 0);

                if (isNegative) {
                    numStr.insert(numStr.begin(), '-'); 
                }

                errorMsg += numStr; 
            }
            errorMsg += " can be deleted";
            return errorMsg;
        } else {
            string newString = mainString.substr(0, position) + mainString.substr(position + n , mainString.length());
            mainString = newString;
            return mainString;
        }
    }
}
int main(){
	int ch;
	cout << "Main string = " << mainString << endl;
	do{
		cout << "\nPress 1 to enter a substring at a given position" << endl;
		cout << "Press 2 to delete n characters from a given position" << endl;
		cout << "Press any key to exit" << endl;
		cout << "\nEnter your choice : ";
		cin >> ch;
		if(ch == 1){
			cout << insertSubstring() << endl;
		}
		else if(ch == 2){
			cout << deleteCharacters() << endl;
		}
	}while(ch == 1 || ch == 2);

	return 0;	
}
