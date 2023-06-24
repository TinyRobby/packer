#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include "../Headers/json.hpp"
#include <stumpless.h>
#include <regex>
#include "../Headers/funcs.h"
using namespace std;

int main(int argc, char *argv[] ) {
	stumpless_target* file_target = stumpless_open_file_target("packer.log");
	stump("Packer started");
	// cURL setup
	curl_global_init(1);
	CURL *easy_handle = curl_easy_init();
	if(!easy_handle) {
		cerr << "Error: cURL didn't load" << endl;
		return 1;
	}
	if(argv[1] != NULL){
		if(string(argv[1]) == "aaa") {
			cout << "a" << endl;
		}
		if(string(argv[1]) == "install") {
			if(argv[2] == NULL) {
				argInstallNoName();
			} else {
				argInstall(string(argv[2]));
			}

		}
	}
	// Get commands
    string input;
    cout << "Welcome to packer, a pretty good package manager\ntype help for help\n\n" << endl;
    while(true) {
		cout << "[packer] >>> ";
		getline(cin, input);
		if(input.empty() == false) {
			if(input == "exit" || input == "quit") {
					cout << "Bye!" << endl;
					break;
				}
			if(input == "install") {
				string a;
				cout << "install from machine(1) or internet(2)?" << endl;
				int q;
				cin >> q;
				switch(q)
				{
				case 0:
					argInstallNoName();
					break;
				case 1:
					emptie: cout << "Error: No Name." << endl;
					cout << "Package name?";
					getline(cin, a);
					if(a == "") {
						goto emptie;
					}
					argInstall(a);
					break;
				}
			}
			if(input == "help") {
				cout << "Format:\n [Command]: [Short Desc]\nhelp: this help message\ninstall: install a program\nremove: remove a program\nexit/quit: exit the program\ngen-config: generate a config file if none is present\n" << endl;
			}
			if(input == "devmode") {
				char choose;
				cout << "Enable devmode? (y,n)";
				cin >> choose;
				if(choose == 'y') {
					cout << "devmode enabled\n";
				}
				else {
					cout << "devmode disabled\n";
				}
			}
		} else {
			cout << "No command specified" << endl;
		}
    }
    return 0;
}

