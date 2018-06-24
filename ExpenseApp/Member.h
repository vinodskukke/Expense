#include<iostream>
#include<string.h>
using namespace std;

#ifndef MEMBER_H
#define MEMBER_H

#define MAX_EXPENSE 10

class Expense {
  public:
    Expense();
    Expense(Expense& exp);
    Expense& operator =(Expense& exp);
    string date;
    string expense_name;
    int amount;
};

class ExpenseList {
  public:
    ExpenseList(Expense& exp);
    Expense expense_t;
    ExpenseList* next;
};

class Member {
  public:
    Member(string name);
    ~Member();
    void displayExpenseList();
    bool AddExpense(Expense exp);
    bool updateExtraShare(int amount);
    int _monthShare;
    string _name;
  private:
    ExpenseList* _expListPtr[MAX_EXPENSE];
    ExpenseList* _headList;
    int _extraShare;
    int _expCount;
};

#endif
