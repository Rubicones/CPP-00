//
// Created by rubicon on 01.07.2022.
//
#include <iostream>

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j]; j++) {
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z'){
				argv[i][j] = argv[i][j] - 32;
				std::cout << argv[i][j];
			}
			else
				std::cout << argv[i][j];
		}
	}
	return (0);
}
