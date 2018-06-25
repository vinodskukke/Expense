#include"Account.h"
using namespace std;

int main()
{
  cout<<"Welcome to Expense App"<<endl;
  cout<<endl;
  int op;
  Account mainAcct(30000);
  string tempStr;
  Expense tempExp;
  Member* tempMemPtr;
  while(1)
  {
    cout<<"Enter 1 to Add Member"<<endl;
    cout<<"Enter 2 to Delete Member" <<endl;
    cout<<"Enter 3 to Add Expense"<<endl;
    cout<<"Enter 4 to Delete Expense"<<endl;
    cout<<"Enter 5 to DisplayMonthlyBalance"<<endl;
    cout<<"Enter 6 to DisplayMemberExpense"<<endl;
    cin>>op;
    switch(op)
    {
      case 1:
        cout<<"Enter the Member name" <<endl;
        cin>>tempStr;
        mainAcct.addMember(tempStr);
        break;
      case 2:
        break;
      case 3:
	cout <<"Enter the Expense date" << endl;
        cin >> tempExp.date;
        cout <<"Enter the Expense name" << endl;
	cin >> tempExp.expense_name;
	cout <<"Enter the Expense Amount" << endl;
	cin >> tempExp.amount;
        cout <<"Paid by"<< endl;
        cin >> tempStr;
	mainAcct.addExpense(&tempExp,&tempStr);
        break;
      case 4:
        break;
      case 5:
	mainAcct.displayAccountDetails();
        break;
      case 6:
	cout <<"Enter the Member's Name" << endl;
        cin >> tempStr;
	tempMemPtr = mainAcct.findMemberFromName(&tempStr);
	tempMemPtr->displayExpenseList();
        break;
      case 0:
      default:
        return 0;
    }
  }
  return 0;
}
