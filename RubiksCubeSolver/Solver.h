#ifndef SOLVER_H
#define SOLVER_H

#include <iostream>
#include <string>

#include "Piece.h"
#include "Queue.h"
#include "LinkedList.h"

#define RESET   "\033[0m"
#define RED     "\033[1m\033[31m"      /* Red */
#define GREEN   "\033[1m\033[32m"      /* Green */
#define YELLOW  "\033[1m\033[33m"      /* Yellow */
#define BLUE    "\033[1m\033[34m"		/* Blue */
#define MAGENTA "\033[1m\033[35m"      /* Magenta */
#define CYAN    "\033[1m\033[36m"      /* Cyan */
#define WHITE   "\033[1m\033[37m"      /* White */

class Solver {
	public:
		Solver(std::string userAlgorithm);
		~Solver();
		void executeUserAlgorithm(std::string userAlgorithm);
		void simplifyAlgorithm(Queue<std::string>& algorithm);
		void printCube();
		void innerMovement(int initialEdgeRow, int initialEdgeCol);
		void F();
		void R();
		void U();
		void D();
		void L();
		void B();
		void E();
		void Fp();
		void Rp();
		void Up();
		void Dp();
		void Lp();
		void Bp();
		void Ep();
		void F2();
		void R2();
		void U2();
		void D2();
		void L2();
		void B2();
		void E2();
		void Cross();
		void FirstLayerF2L();
		void SecondLayerF2L();
		void EdgesOLL();
		void EdgesPLL();
		void CornersPLL();
		void CornersOLL();
		bool foundInferiorEdge(char face, int edge);
		bool foundInferiorCorner(char face, int edge);
		bool foundMiddleEdge(char face, int edge);
		bool orientedTopEdges(int edge1, int edge2, int edge3, int edge4);
		bool permutedTopEdges(int edge1, int edge2, int edge3, int edge4);
		bool permutedTopCorners(int corner1, int corner2, int corner3, int corner4);
		bool orientedTopCorners(int corner1, int corner2, int corner3, int corner4);
		void flipEdge();
		void insertRightCorner();
		void insertLeftCorner();
		void removeCornerU();
		void removeCornerUp();
		void insertTopCorner();
		void insertAtLeft();
		void insertAtRight();
		void removeAtLeft();
		void removeAtRight();
		void FRURUF();
		void train();
		void inAndOut();
		void RDRD();
	private:
		Piece*** cube;
		Queue<std::string> scramblerAlg;
		Queue<std::string> solverAlg;
		LinkedList<std::string> simplifier;
};

#endif
