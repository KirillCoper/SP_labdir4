#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <unistd.h>
#include <signal.h>
#include <cstdlib>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
using namespace std;
int main()
{
    pid_t v;
    int code;
    string s;
    string str;
    cout << "Text budet vzyat iz faila TEXT" << endl;
    cout << "Vvedite slovo ili fragment " << endl;
    cin >> str;
    const char* chs;
    const char* chstr;
    chs = str.c_str();
    ifstream file("/TEXT");
    while (getline(file, s))
    {
        chstr = s.c_str();
        v = fork();
        switch (v)
        {
        case -1:
            cout << "\tOshibka " << endl;
        case 0:
            cout << "\tThe PID of Child is: " << getpid() << endl;
            sleep(15);
            execl("finder1", "/finder1", chstr, chs, NULL);
        default:
            cout << "\tThe PID of Parent is: " << getpid() << endl;
            wait(&code);
        }
    }
}