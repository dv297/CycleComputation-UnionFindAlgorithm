/****************************************************************
 * Header for the 'Node' class
 *
 * Author/copyright: Duncan Buell. All rights reserved.
 * Used with permission:
 *   Daniel Vu, Collin Haines, Kevin Silver, Julio Diaz
 * Speculated start date: January 2014
 * Submission Date: 24 April 2014
 *
 **/

#ifndef X_H
#define X_H

#include "../../Utilities/Utils.h"
#include "../../Utilities/Scanner.h"

#define DUMMYX -1
#define DUMMYY -2

class Node
{
public:
  /****************************************************************
   * Constructors and destructors for the class.
   **/
  Node();
  Node(int x, int y);
  virtual ~Node();

  /****************************************************************
   * General functions
   **/
  int getCurrentValue() const;
  int getParentValue() const;
  void setCurrentValue(int value);
  void setParentValue(int value);
  
  friend ostream& operator <<(ostream& outputStream, const Node& node);

  bool equals(Node that);

  string toString() const;

private:
  int currentValue;
  int parentValue;
  
  /****************************************************************
   * General private functions
   **/
};

#endif // X_H
