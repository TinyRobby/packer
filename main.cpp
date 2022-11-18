#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include "json.hpp"

using namespace std;

int main(int argc, char *argv[] ) {
    string input;
    cout << "Welcome to packer the GNU/Linux Package manager\ntype help for help\n\n" << endl;
    while(true) {
		cout << "[packer] >>> ";
		cin >> input;
		if(input == "exit") {
			cout << "Bye!" << endl;
			break;
        	}
		if(input == "help") {
			cout << "Format:\n [Command]: [Short Desc]\nhelp: this help message\ninstall: install a program\nexit: exit the program" << endl;
		}
    }
    return 0;
}
