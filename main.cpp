#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include "Headers/json.hpp"

using namespace std;

int main(int argc, char *argv[] ) {
	curl_global_init(1);
	CURL *easy_handle = curl_easy_init();
	if(!easy_handle) {
		cerr << "Error: cURL didn't load" << endl;
		return 1;
	}
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
			cout << "Format:\n [Command]: [Short Desc]\nhelp: this help message\ninstall: install a program\nremove: remove a program\nexit: exit the program" << endl;
		}
    }
    return 0;
}
