//
// Domain.h
//
#ifndef DOMAIN_H
#define DOMAIN_H
#include "Shape.h"
#include "utils/utils.h"
#include<iostream>
#include<vector>


class Domain
{
public:
  Domain();
  ~Domain();
  void addShape(const Shape* p);
  void draw();
private:
  int sizex, sizey;
  std::vector<const Shape*> s;
};
#endif
