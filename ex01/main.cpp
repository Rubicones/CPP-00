//
// Created by Deadshot Gizzard on 7/4/22.
//
#include "PhoneBook.h"

int main(){

	PhoneBook phonebook;
	std::string command;

	while (1){
		std::cout << "ENTER A COMMAND: " << std::endl;
		std::cin >> command;
		if (command == "ADD"){
			phonebook.add();
		}
		else if (command == "SEARCH"){
			 if (phonebook.search()){
				 std::cout << "CHOOSE CONTACT: " << std::endl;
				 std::cin >> command;
				 try {
					 phonebook.view_contact(std::stoi(command));
				 }
				 catch (...){
					 std::cout << "THIS IS NOT AN INDEX" << std::endl;
				 }
			 }
		}
		else if (command == "EXIT"){
			break;
		}
		else{
			std::cout << "WRONG COMMAND!" << std::endl;
		}
	}
	return (0);
}