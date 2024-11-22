#include<iostream>
#include<string>
using namespace std;
int findIndex(string sentence,string word){
    return sentence.find(word);
}
int main(){
    string sen,word;
    cout<<"Write a sentence: ";
    getline(cin,sen);
    cout<<"Write a word to find its starting index: ";
    getline(cin,word);
    cout<<word<<" is found at index: "<<findIndex(sen,word);
    return 0;
}