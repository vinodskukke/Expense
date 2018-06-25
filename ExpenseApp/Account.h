#include"Member.h"
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H 1

#define MAX_MEMBERS 7

class Account {
  public:
    Account(int amount);
    ~Account();
    void displayAccountDetails();
    bool addMember(string name);
    void updateExpenseAmount(int amount);
    bool addExpense(Expense* exp,string* name);
    Member* findMemberFromName(string* name);
  private:
    int totalMonthlyShare;
    int usedAmount;
    Member* memberPtr[MAX_MEMBERS];
    int countMem;
};

#endif
