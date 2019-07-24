//GetWords
#include <string>
#include <iostream>
#include <fstrem>
#include <vector>
using namespace std;

int main() 
{
    vector<string> words;
    ifstream in("GetWords.cpp");
    string word;
    while(in >> word)
        words.push_back(word);
    for(int i=0; i < words.size(); i++)
        cout << words[i] << endl;
}