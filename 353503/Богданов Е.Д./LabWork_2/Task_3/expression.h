#ifndef EXPRESSION_H
#define EXPRESSION_H


class Expression
{
public:
  Expression();
  virtual double evaluate();
  virtual ~Expression();
};

#endif // EXPRESSION_H
