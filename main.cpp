#include <iostream>
// #include <ifstream>
#include <curl/curl.h>
#include "json.hpp"

using namespace std;

int main(int argc, char *argv[] ) {
    if(argc == 1) {
        cout << "usage: " << argv[0] << " [ARGUMENT]" << endl;
    } else {
        if(argv[1] = "i") {
            cout << "no\n";
        }
    }

    return 0;
}