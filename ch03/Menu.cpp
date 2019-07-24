//Menu

#include <iostream>
using namespace std;

int main()
{
    char c;
    while (true)
    {
        cout <<"MAIN MENU: " << endl;
        cout << "1: left, r: right, q:quit ->"
        cin >> c;
        if (c == 'q')
            break;
        if(c =='l') {
            cout <<'LEFT MENU:' <<endl;
            cout <<"select a or b:";
            cin >> c;
            if(c == 'a') {
                cout << "you chose 'b'"<< endl;
                continue;
            }
            else if(c =='b'){
                cout << "you chose 'c'"<<endl;
                continue;
            }
            else {
                cout <<"you didn't choose a or b!"
                <<endl;
                continue;
            }
        }

        
    }
}