#include "Piece.h"

Piece::Piece() {
	p_orientation = 0;
	p_permutation = 0;
}

int Piece::getPermutation() const {
	return(p_permutation);
}

void Piece::setPermutation(int permutation) {
	p_permutation = permutation;
}

std::string Piece::getType() const {
	return("Piece");
}
