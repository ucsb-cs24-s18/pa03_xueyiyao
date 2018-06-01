//cards.h
//Allen Yao
//All class declarations go here

#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
using namespace std;

struct card{
  
  char face;
  char suit;
  card* left;
  card* right;
  card* parent;
  
  };

//hand in form of bst
class hand{

 public:
  hand();
  ~hand();

  void setName(const string& s);
  string getName() const;

  void append(const char face, const char suit);
  void srmatch(hand& h);
  void removeCard(card& c);
  bool ismatch(const hand& h);

  friend ostream& operator <<(ostream& os, const hand& h1);

 private:
  card* root;
  string name;
  
};

bool operator==(card& c1, card& c2);
bool operator>(card& c1, card& c2);
bool operator<(card& c1, card& c2);	       

#endif
