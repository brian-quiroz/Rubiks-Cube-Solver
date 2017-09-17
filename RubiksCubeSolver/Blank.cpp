#include "Blank.h"

Blank::Blank() {
	p_orientation = 0;
	p_permutation = 0;
}

int Blank::getOrientation() const {
	return(p_orientation);
}

int Blank::getPermutation() const {
	return(p_permutation);
}

void Blank::setOrientation(int orientation) {
	p_orientation = orientation;
}

void Blank::setPermutation(int permutation) {
	p_permutation = permutation;
}

std::string Blank::getType() const {
	return("Blank");
}