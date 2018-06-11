//cards.h
//Allen Yao
//All class declarations go here

#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
using namespace std;

struct card{

  int facev;
  int suitv;
  card* left;
  card* right;
  card* parent;

  };

//hand in form of bst
class hand{

 public:
  hand();
  ~hand();
  void clear(card* c);
  
  void insert(const char suit, const char face);
  void inserth(const char suit, const char face, card* c);

  void print() const;

  card* find(card* c);
  card* getSuccessorCard(card* n);
  card* getPredecessorCard(card* n);

  card* ismax(card* n);
  card* ismin(card* n);

  void removeCard(card* n);

  int count() const;
  
  card* root;

 private:
  void printInOrder(card* c) const;
  int countHelper(card* n) const;
  card* getCardNode(card& c, card* n);
  
};

void printCards(hand& h1, hand& h2);
void traverseh1(hand& h1, hand& h2, bool& iscomplete);
void traverseh2(hand& h2, hand& h1, bool& iscomplete);

int convertsuit(const char& suit);
int convertface(const char& face);

string cardToString(const int svalue, const int fvalue);

bool operator==(card& c1, card& c2);
bool operator>(card& c1, card& c2);
bool operator<(card& c1, card& c2);	       

#endif
