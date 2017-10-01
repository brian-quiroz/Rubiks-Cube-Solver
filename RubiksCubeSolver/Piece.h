#ifndef PIECE_H
#define PIECE_H

#include <string>

class Piece {
	public:
		Piece();
		std::string getType() const;
		int getPermutation() const;
		void setPermutation(int permutation);
	protected:
		int p_orientation;
		int p_permutation;
};

#endif
