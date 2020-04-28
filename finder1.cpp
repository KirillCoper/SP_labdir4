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

int main(int argc, char* argv[])
{
    string str = argv[1];
    string s = argv[2];
    if (str.find(s) < 1000) {
        cout << "Naideno v pozicii " << str.find(s) << endl;
        exit(1);
    }
    else
    {
        cout << "Ne naideno" << endl;
        exit(0);
    }
    return 0;
}