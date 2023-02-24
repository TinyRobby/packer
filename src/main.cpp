#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include "../Headers/json.hpp"
#include <stumpless.h>
#include "../Headers/funcs.h"
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


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
					cout << "install from machine or internet?" << endl;
					int q;
					string d;
					cout << "1) Machine\n2) Internet" << endl;
					cin >> q;
					switch(q) {
						case 1: {
							cout << "Where is the json/pak file? >> ";
							cin >> d;
							string dir[255];
							int i = 0;
							for (const auto & entry : fs::directory_iterator(d)) {
									dir[i] = entry.path();
									i++;
							}
							for(int j; j <= i; j++) {
								
							}
							break;
						}
						case 2: {
							
						}
						default: {
							cout << "Unrecognised response.";
							break;
						}
					}
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
				cout << "install from machine or internet?" << endl;
				string* q = new string;
				cin >> *q;
				
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
