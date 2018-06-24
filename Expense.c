#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NORMAL_SHARE 4500

// Members structure
typedef struct
{
  char name[10];
  int normal_share;
  int extra_share;
} member;

// Expense Structure
typedef struct
{
  char expense_name[20];
  char paid_by[10];
  int amount;
}expense;

member Bachelor_home[6]; // Member Array with 6 members
member *member_ptr; // Member pointer
static int count=0; // To get the active members count
static int total=0;
static int balance=0;

void UpdateBalance()
{
  int old_total = total;
  total = (NORMAL_SHARE*count);
  if(!balance)
    balance = total;
  else
    balance += (total-old_total);
}

void AddMember(char* name)
{
  member_ptr = &Bachelor_home[count++];
  strcpy(member_ptr->name,name);
  member_ptr->normal_share = NORMAL_SHARE;
  member_ptr->extra_share = 0;
  UpdateBalance(); 
}

int main()
{
  printf("\t\t\t\tWelcome to Bachelor's Home");
  char temp_name[10];
  int i,rc,amt,op;
  while(1)
  {
    printf("\n\n");
    printf("Press 1 to Add Member\n");
    printf("Press 2 to delete Member\n");
    printf("Press 3 to display monthly details\n");
    printf("Press 4 to Add Expense\n");
    printf("Press 5 to Delete/Change expense\n");
    printf("Press 6 to display total expense\n");
    printf("Press 7 to exit\n");
    scanf("%d",&op);
    switch(op)
    {
      case 1:
        printf("Enter the name of the member\n");
        scanf("%s",temp_name);
        AddMember(temp_name);
        break;
      case 2:
        break;
      case 3:
        printf("Monthly budget amount is %d\n",total);
        printf("Remaining amount is %d\n",balance);
        break;
      case 4:
        printf("Enter Expense details\n");
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
      default:
        return 0;
    }

  }
}
