#ifndef CENTER_H
#define CENTER_H

#include <string>

#include "Piece.h"

class Center : public Piece {
	public:
		Center();
		std::string getType() const;
		int getOrientation() const;
		int getPermutation() const;
		void setOrientation(int orientation);
		void setPermutation(int permutation);
};

#endif