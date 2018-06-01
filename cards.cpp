//cards.cpp
//Authors: Your name and your partner's name
//Implementation of the classes defined in cards.h

#include "cards.h"

#include <iostream>
#include <string>
using namespace std;

//constructor
hand::hand(){
  root = 0;
}

//deconstructor
hand::~hand(){
  
}

//sets player name
void hand::setName(const string& s){

}

//gets player name
string hand::getName() const{
  return;
}

//appends cards to tree
void hand::append(const char face,const char suit){

}

//searches and removes card from hand
void hand::srmatch(hand& h){

}

//helper function for srmatch, removes card c
void hand::removeCard(card& c){

}

//checks if there are still matches
bool hand::ismatch(const hand& h){
  return false;
}

//overloading << operator
ostream& operator <<(ostream& os, const hand& h1){
  return;
}

//overloading == operator
bool operator==(card& c1, card& c2){
  return false;
}

