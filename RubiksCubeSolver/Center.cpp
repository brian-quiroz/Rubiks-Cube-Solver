#include "Center.h"

Center::Center() {
	p_orientation = 0;
	p_permutation = 0;
}

int Center::getOrientation() const {
	return(p_orientation);
}

int Center::getPermutation() const {
	return(p_permutation);
}

void Center::setOrientation(int orientation) {
	p_orientation = orientation;
}

void Center::setPermutation(int permutation) {
	p_permutation = permutation;
}

std::string Center::getType() const {
	return("Center");
}