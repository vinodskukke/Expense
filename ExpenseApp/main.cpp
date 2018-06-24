#include"Account.h"
using namespace std;

int main()
{
  cout<<"Welcome to Expense App"<<endl;
  cout<<endl;
  while(1)
  {
    int op;
    Account mainAcct(30000);
    string tempStr;
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
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 0:
      default:
        return 0;
    }
  }
  return 0;
}
