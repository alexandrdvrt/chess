#include "chesslib.h"

int Wizir::attack(char* p)
{
  if(deskout(p)>0)
    return(0);
  int x = p[0] - pos[0];
  int y = p[1] - pos[1];
  if(x<0) x=-x;
  if(y<0) y=-y;
  if(((x+y)>1) && ((x+y)<3) && (x != y))
    return(1);
  return(0);
}

int Bishop::attack(char* p)
{
  if(deskout(p)>0)
    return(0);
  int x = p[0] - pos[0];
  int y = p[1] - pos[1];
  if(x<0) x=-x;
  if(y<0) y=-y;
  if(x!=y)
    return(0);
  return(1);
}

int Target::attack(char* s)
{
  if(Wizir::attack(s)>0)
    return(1);
  if(Bishop::attack(s)>0)
    return(2);
  return(0);
}