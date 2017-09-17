#include "Piece.h"

Piece::Piece() {
	p_orientation = 0;
	p_permutation = 0;
}

int Piece::getOrientation() const {
	return(p_orientation);
}

int Piece::getPermutation() const {
	return(p_permutation);
}

void Piece::setOrientation(int orientation) {
	p_orientation = orientation;
}

void Piece::setPermutation(int permutation) {
	p_permutation = permutation;
}

std::string Piece::getType() const {
	return("Piece");
}