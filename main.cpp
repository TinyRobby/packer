#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include "json.hpp"

using namespace std;

int main(int argc, char *argv[] ) {
    string arg1 = argv[1];
    if(argc == 1) {
        cout << "usage: " << argv[0] << " [ARGUMENT]" << endl;
    } else {
        if(arg1 == "i") {
            cout << "no" << endl;
        }
    }

    return 0;
}