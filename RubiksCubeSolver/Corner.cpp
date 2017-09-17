#include "Corner.h"

Corner::Corner() {
	p_orientation = 0;
	p_permutation = 0;
}

int Corner::getOrientation() const {
	return(p_orientation);
}

int Corner::getPermutation() const {
	return(p_permutation);
}

void Corner::setOrientation(int orientation) {
	p_orientation = orientation;
}

void Corner::setPermutation(int permutation) {
	p_permutation = permutation;
}

std::string Corner::getType() const {
	return("Corner");
}