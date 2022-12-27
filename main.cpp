#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include "Headers/json.hpp"

using namespace std;

int main(int argc, char *argv[] ) {
	// cURL setup
	curl_global_init(1);
	CURL *easy_handle = curl_easy_init();
	if(!easy_handle) {
		cerr << "Error: cURL didn't load" << endl;
		return 1;
	}
	// Get commands
    string input;
    cout << "Welcome to packer the GNU/Linux Package manager\ntype help for help\n\n" << endl;
    while(true) {
		cout << "[packer] >>> ";
		getline(cin, input);
		if(input.empty() == false) {
			if(input == "exit" || input == "quit") {
					cout << "Bye!" << endl;
					break;
				}
			if(input == "help") {
				cout << "Format:\n [Command]: [Short Desc]\nhelp: this help message\ninstall: install a program\nremove: remove a program\nexit/quit: exit the program\ngen-config: generate a config file if none is present\ndevmode: engage devmode (single session only)" << endl;
			}
			if(input == "devmode")
		} else {
			cout << "No command specified" << endl;
		}
    }
    return 0;
}
