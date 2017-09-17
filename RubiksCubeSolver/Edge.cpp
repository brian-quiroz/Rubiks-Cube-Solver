#include "Edge.h"

Edge::Edge() {
	p_orientation = 0;
	p_permutation = 0;
}

int Edge::getOrientation() const {
	return(p_orientation);
}

int Edge::getPermutation() const {
	return(p_permutation);
}

void Edge::setOrientation(int orientation) {
	p_orientation = orientation;
}

void Edge::setPermutation(int permutation) {
	p_permutation = permutation;
}

std::string Edge::getType() const {
	return("Edge");
}