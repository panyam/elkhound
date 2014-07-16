// treeout.h            see license.txt for copyright and terms of use
// interface for printing trees; very small right now

// the idea is to print ascii marked in a way that Emacs' outline
// mode can read and display it as a tree

#ifndef TREEOUT_H
#define TREEOUT_H

#include <iostream>     // ostream

using std::cout;
using std::endl;
using std::istream;
using std::ifstream;
using std::ostream;
using std::ofstream;

// print heading to stdout, with some indication of tree level
std::ostream &treeOut(int level);

#endif // TREEOUT_H
