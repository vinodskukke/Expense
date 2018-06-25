#include"Account.h"
using namespace std;

Account::Account(int amount)
{
  totalMonthlyShare = amount;
  usedAmount =0;
  countMem = 0;
  addMember("home");
}

Account::~Account()
{

}

void Account::updateExpenseAmount(int amount)
{
  usedAmount += amount;
}

bool Account::addMember(string name)
{
  memberPtr[countMem] = new Member(name);
  memberPtr[countMem]->_monthShare = totalMonthlyShare / 6; //Add generic calculation
  countMem++;
}

void Account::displayAccountDetails()
{
  cout <<" Total budget for this month is" <<totalMonthlyShare <<endl;
  cout <<"Remaining balance is" <<(totalMonthlyShare - usedAmount) <<endl;
}

Member* Account::findMemberFromName(string* name)
{
  for(int i=0;i<countMem;i++)
  {
    if(memberPtr[i]->_name == *name)
      return memberPtr[i];
  }
  return NULL;
}

bool Account::addExpense(Expense* exp,string* name)
{
  Member* tempMem = findMemberFromName(name);
  if(tempMem != NULL)
  {
    tempMem->AddExpense(exp);
    if(tempMem->_name == "home")
      updateExpenseAmount(exp->amount);
    tempMem->displayExpenseList();
  }
}
