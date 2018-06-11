//test.cpp
#include "cards.h"

#include <iostream>
#include <string>
using namespace std;






void find(card* p, const card& c){
  /*if(p){
    if(*p = c){
      return c;
    }
    if(*p < c){
      return find(p->left, c);
    }
    if(*p > c){
      return find(p->right, c);
    }
  }
  else
  return NULL;*/
}

//test append (same as insert)
void testappend(){
  cout << "Appending h 9, c k, s 3, c a, h j, d 3 to hand" <<endl;
  //appends cards to hand in that order

  //prints inorder, preorder, and postorder tree traversals  
}

//test removeCard (same as delete)
void testremove(){
  cout << "Appending h 9, c k, s 3, c a, h j, d 3 to hand" <<endl;
  //appends cards in that order
  
  //deletes leaf card

  //deletes root card

  //prints cards in order
}

//tests both search and remove
void testsrmatch(){
  //makes two hands and inserts cards, one card the same in both
  //removes identical card
  //prints both hands
}

void testismatch(){
  //makes two hands and inserts cards, one card the same in both
  //checks for match, should say yes
  //removes identical card
  //checks for match, should say no

}

void successor(){
  //checks for successor
}

void predecessor(){
  //checks for predecessor
}

int main(){
  hand h1, h2;
  h1.insert('d', '9');
  h1.insert('s', '1'); //10
  h1.insert('h', 'j');

  bool all = true;
  int testnum = getTest();
  if (testnum){
    all = false;
  }
  
  return 0;
}
