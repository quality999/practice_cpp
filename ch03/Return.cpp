//Return
#include <iostream>
using namespace std;

char cfunc(int i){
    if(i==0)
        return 'a'; // 注意这里需要的是'' 而不是"""
    if(i==1)
        return 'b';
    if(i==5)
        return 'z';
    
    return 'c';
}

int main() 
{
    cout <<"type an integer: ";
    int val;
    cin >> val;
    cout << cfunc(val) << endl;
}