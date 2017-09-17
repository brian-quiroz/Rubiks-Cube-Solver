#include <iostream>
#include <string>

#include "Piece.h"
#include "Solver.h"
#include "Node.h"
#include "Queue.h"
#include "LinkedList.h"
#include "PreconditionViolationException.h"

int main(int argc, char* argv[]) {
	bool isValid = true;
	std::string algorithm = "";
	
	std::cout << "\nUser algorithm: ";
	
	std::getline(std::cin, algorithm);
	
	if (algorithm.length() > 1) {
		isValid = false;
		for (unsigned int i = 0; i < algorithm.length(); i++) {
			if (algorithm[i] == ' ') {
				isValid = true;
			}
		}
	}
	
	while (((algorithm[0] != 'F') && (algorithm[0] != 'R') && (algorithm[0] != 'U') && (algorithm[0] != 'D') &&
			(algorithm[0] != 'B') && (algorithm[0] != 'L')) || (!isValid)) {
		std::cout << "Error! Please input a valid algorithm: ";
		std::getline(std::cin, algorithm);
		isValid = true;
		if (algorithm.length() > 1) {
			isValid = false;
			for (unsigned int i = 0; i < algorithm.length(); i++) {
				if (algorithm[i] == ' ') {
					isValid = true;
				}
			}
		}
	}
	
	Solver s(algorithm);
	
	return (0);
}
