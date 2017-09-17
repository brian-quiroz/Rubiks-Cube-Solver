#ifndef CORNER_H
#define CORNER_H

#include <string>

#include "Piece.h"

class Corner : public Piece {
	public:
		Corner();
		std::string getType() const;
		int getOrientation() const;
		int getPermutation() const;
		void setOrientation(int orientation);
		void setPermutation(int permutation);
};

#endif