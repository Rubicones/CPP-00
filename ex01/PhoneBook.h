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
	Contact contacts[8];
public:
	PhoneBook();
	void add();
	int search();
	void view_contact(int index);
private:
	int current_id;
	int contact_count;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	std::string formate_string(std::string to_format);
};

#endif //PHONEBOOK_H
