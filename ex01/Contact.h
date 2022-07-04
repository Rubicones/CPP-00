//
// Created by Deadshot Gizzard on 7/4/22.
//

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include "PhoneBook.h"

class Contact{
public:
	Contact(std::string first_name, std::string last_name, std::string nickname,\
		std::string phone_number, std::string darkest_secret){
		_first_name = first_name;
		_last_name = last_name;
		_nickname = nickname;
		_phone_number = phone_number;
		_darkest_secret = darkest_secret;
	}

	std::string get_first_name(){
		return (_first_name);
	}
	std::string get_last_name(){
		return (_last_name);
	}
	std::string get_nickname(){
		return (_nickname);
	}
	std::string get_phone_number(){
		return (_phone_number);
	}
	std::string get_darkest_secret(){
		return (_darkest_secret);
	}
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif //CONTACT_H
