//HelloStrings
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1, s2; 
    string s3 = "Hello world";
    string s4("i am");
    s2 = "Today";
    s1 = s3 + " " + s4;
    s1 += " 8 ";
    cout << s1 + s2 + "!" << endl;
}