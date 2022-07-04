//
// Created by rubicon on 01.07.2022.
//
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.h"

class PhoneBook{
	Contact *contacts;
public:
	PhoneBook(){
		contact_count = 0;
		current_id = 0;

	}
	void add(){
		current_id = contact_count;
		if (contact_count >= 8)
		{
			for (int i = 0; i < 8; i++)
			{
				contacts[i] = contacts[i + 1];
			}
			current_id = 8;
		}

		std::cout << "Enter first name: " << std::endl;
		std::cin >> _first_name;
		std::cout << "Enter last name: " << std::endl;
		std::cin >> _last_name;
		std::cout << "Enter nickname: " << std::endl;
		std::cin >> _nickname;
		std::cout << "Enter phone_number: " << std::endl;
		std::cin >> _phone_number;
		std::cout << "Enter darkest secret: " << std::endl;
		std::cin >> _darkest_secret;
		contacts[current_id] = Contact(_first_name, _last_name, _nickname,\
		_phone_number, _darkest_secret);
		contact_count++;
	}
	void search(){
		std::cout
				<< std::right
				<< std::setw(10)
				<< formate_string((std::string)"Index")
				<< std::right
				<< std::setw(10)
				<<  formate_string((std::string)"First name")
				<< std::right
				<< std::setw(10)
				<<  formate_string((std::string)"Last name")
				<< std::right
				<< std::setw(10)
				<<  formate_string((std::string)"Nickname")
				<< std::endl;

		for (int i = 0; i <= current_id; i++){
			std::cout
				<< std::right
				<< std::setw(10)
				<< current_id << "|"
				<< std::right
				<< std::setw(10)
				<< formate_string(contacts[current_id].get_first_name())
				<< std::right
				<< std::setw(10)
				<< formate_string(contacts[current_id].get_last_name())
				<< std::right
				<< std::setw(10)
				<< formate_string(contacts[current_id].get_nickname())
				<< std::endl;
		}
	}
private:
	int current_id;
	int contact_count;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	std::string formate_string(std::string to_format){
		to_format.append("|");
		if (to_format.length() > 11){
			to_format.at(9) = '.';
			to_format.erase(10);
			to_format.append("|");
		}
		return (to_format);
	}
};

#endif //PHONEBOOK_H


//void Add(){
//	if (contact_count < 8)
//		current_id = contact_count;
//	std::cout << "Enter first name: " << std::endl;
//	std::cin >> contacts[contact_count]._first_name;
//	std::cout << "Enter last name: " << std::endl;
//	std::cin >> contacts[contact_count]._last_name;
//	std::cout << "Enter nickname: " << std::endl;
//	std::cin >> contacts[contact_count]._nickname;
//	std::cout << "Enter phone_number: " << std::endl;
//	std::cin >> contacts[contact_count]._phone_number;
//	std::cout << "Enter darkest secret: " << std::endl;
//	std::cin >> contacts[contact_count]._darkest_secret;
//}