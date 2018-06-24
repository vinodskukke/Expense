#include"Member.h"
using namespace std;

int main()
{
  Expense exp;
  exp.date ="21/06/2018";
  exp.expense_name ="wifi";
  exp.amount = 5000;
  Member mem("vinod");
  mem.AddExpense(exp);
  mem.displayExpenseList();
  mem.AddExpense(exp);
  mem.displayExpenseList();
}
