#ifndef BLANK_H
#define BLANK_H

#include <string>

#include "Piece.h"

class Blank : public Piece {
	public:
		Blank();
		std::string getType() const;
		int getOrientation() const;
		int getPermutation() const;
		void setOrientation(int orientation);
		void setPermutation(int permutation);
};

#endif