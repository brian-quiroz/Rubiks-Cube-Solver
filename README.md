# Rubiks-Cube-Solver
Program that solves the Rubik's cube

Rubik's Cube Basics:
  Rubik's cube movements are typically written in terms of 6 basic letters that represent the Front (F), Back (B), Left (L), Right (R), Up (U), and Down (D) faces on a Rubik's cube relative to the person holding the cube.
  The letters by themselves (such as F) represent a clockwise 90 degree movement, while letters with an apostrophe (such as R') denote a counterclockwise 90 degree movement and letters with a '2' (such as U2) stand for a double movement in any direction.
  Any other amount of movements in either clockwise or counterclockwise direction will yield the same result as either of the three movements I explained. Thus, if any redundancy is found, the algorithm can be simplified.
  Examples of redundancy:
    L L' = no moves (doesn't change anything, because the move was reverted),
    B B2 = B' (three moves in the clockwise direction can simply be written as a single move in the counterclockwise direction), and
    D2 D D2 D2 = D' (seven movements in the clockwise direction equal 4 + 3 movements, where after the first four the cube reverts to its original state, so the net change in the cube is three clockwise movements or simply one counterclockwise movement).
  A Rubik's cube has three types of pieces or "cubies":
    6 centers that have one sticker each are fixed respect to each other,
    12 edges that have two stickers each, and
    8 edges that have three stickers each.
  A collection of one or more movements that lead to a particular state are called algorithms. The "particular state" can sometimes be a scrambled cube, so although it may seem counterintuitive, "scramble algorithms" exist.
  

Synopsis:
  The program creates a double array of "pieces" (objects) and assigns a numerical value to each relevant piece (note that what my program refers to as pieces are actually stickers, but the program moves the cube as if they were entire pieces or "cubies").
  It takes in the user's scrambler algorithm, simplifies it, and performs those movements on a solved Rubik's cube.
  The program utilizes what is commonly referred to as the "beginner's method", a simple 7-step method to solve the Rubik's cube, showing the user each step.
  It writes out all the individual movements it used and writes down a simplified version that the user can use to solve the cube, given the scramble he/she provided.
  
