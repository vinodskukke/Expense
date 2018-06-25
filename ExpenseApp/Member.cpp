#include"Member.h"
using namespace std;

ExpenseList::ExpenseList(Expense* exp)
{
  this->expense_t = *exp;
  this->next = NULL;
}

Expense::Expense(Expense& exp)
{
  this->date = exp.date;
  this->expense_name = exp.expense_name;
  this->amount = exp.amount;
}

Expense::Expense()
{
  
}

Expense& Expense::operator =(Expense& exp)
{
  this->date = exp.date;
  this->expense_name = exp.expense_name;
  this->amount = exp.amount;
}

Member::Member(string name)
{
  _monthShare = 0;
  _extraShare = 0;
  _name = name;
  _expCount = 0;
  _headList = NULL;
}

Member::~Member()
{
  
}

/* Update the Extra Share of Member TODO:Check for any failure scenario */
bool Member::updateExtraShare(int amount)
{
  _extraShare += amount;
  return true;
}

bool Member::AddExpense(Expense* exp)
{
  if (_expCount < MAX_EXPENSE)
  {
    _expListPtr[_expCount] = new ExpenseList(exp);
    if(_expCount == 0)
    {
      _headList = _expListPtr[_expCount];
      _headList->next = NULL;
    }
    else
    {
      _expListPtr[_expCount-1]->next = _expListPtr[_expCount];
      _expListPtr[_expCount]->next = NULL;
    }
    _expCount++;
  }
}

void Member::displayExpenseList()
{
  ExpenseList* tempList = _headList;
  while(tempList != NULL)
  {
    cout <<tempList->expense_t.date <<"\t";
    cout <<tempList->expense_t.expense_name <<"\t";
    cout <<tempList->expense_t.amount <<endl;
    tempList = tempList->next;
  }
}
