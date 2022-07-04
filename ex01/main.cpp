//
// Created by Deadshot Gizzard on 7/4/22.
//
#include "PhoneBook.h"

int main(){

	PhoneBook pb;
	std::string command;

	while (1){
		std::cout << "ENTER A COMMAND: " << std::endl;
		std::cin >> command;
		if (command == "ADD"){
			pb.add();
		}
		else if (command == "SEARCH"){
			pb.search();
		}
		else if (command == "EXIT"){
			break;
		}
		else{
			std::cout << "Wrong Command!" << std::endl;
		}
	}
	return (0);
}