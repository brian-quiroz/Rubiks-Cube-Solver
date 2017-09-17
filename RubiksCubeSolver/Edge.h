#ifndef EDGE_H
#define EDGE_H

#include <string>

#include "Piece.h"

class Edge : public Piece {
	public:
		Edge();
		std::string getType() const;
		int getOrientation() const;
		int getPermutation() const;
		void setOrientation(int orientation);
		void setPermutation(int permutation);
};

#endif