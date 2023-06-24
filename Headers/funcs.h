#ifndef FUNCS_H
#define FUNCS_H
#include <filesystem>
int argInstallNoName() {
	std::cout << "install from machine or internet?" << std::endl;
					int c;
					int q;
					std::string d;
					int j = 0;
					std::cout << "1) Machine\n2) Internet" << std::endl;
					std::cin >> q;
					switch(q) {
						case 1: {
							std::cout << "Where is the json/pak file? >> ";
							std::cin >> d;
							std::string dir[255];
							int dirSize = std::size(dir);
							int i = 0;
							for (const auto & entry : std::filesystem::directory_iterator(d)) {
									dir[i] = entry.path();
									i++;
							}
							while(j != dirSize) {
								if(
								std::regex_match(dir[j], std::regex(".*\\.pak"))
								||
								std::regex_match(dir[j], std::regex(".*\\.json"))
								&&
								dir[j] != "") {
									std::cout << "one found on file " << j << "of file array" << std::endl;
									c++;
									dir[j] = "";
								} else {
									std::cout << "nothing found on index " << j << "of file array" << std::endl;
								}
								j++;
							}
							if(c > 0) {return 0;}else{return 1;}
						}
						case 2: {

						}
						default: {
							std::cout << "Unrecognised response.";
							return 1;
						}
					}
}
int argInstall(std::string pkg) {

}
#endif
