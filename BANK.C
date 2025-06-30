#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

   struct bank
   {
      int acc_no;
      char name[50];
      int amount;

  };struct bank a1[3];

void menu();
void createacc();
void deposit();
void withdrawal();
void balance();
void displayaccount();
int main()
{
  int choice;
  clrscr();
  while(1)
  {

   menu();
   printf("enter your choice :");
   scanf("%d",&choice);

    switch(choice)
     {
      case 1:createacc();
	    break;
      case 2:deposit();
	    break;
      case 3:withdrawal();
	    break;
      case 4:balance();
	    break;
      case 5:displayaccount();
	    break;
      case 6:printf("exit");
	    break;



    }
     if(choice==6)
     break;


   }
  getch();
  return 0;

 }

void menu()
{

   printf("\t\t\tWELCOME TO NIRAJ BANK OF INDIA\n\n");
   printf("\n 1.create account ");
   printf("\n 2.depoist amount");
   printf("\n 3.withdrawal amount");
   printf("\n 4.check balance");
   printf("\n 5.display account details");
   printf("\n 6.exit\n");



}
void createacc()
{
  int i;
  for(i=1;i<=3;i++)
  {
   printf("\nenter your name :");
   scanf("%ls",&a1[i].name);
   printf("\nenter account number :");
   scanf("%d", &a1[i].acc_no);
   printf("\nenter amount :");
   scanf("%d",&a1[i].amount);
  }

}
void displayaccount()
{
  int i;
  printf("\n account no:\tname:\tbalance:");
  for(i=1;i<=3;i++)
    {
      printf("\t\n%d",a1[i].acc_no);
      printf("\t\n%ls",a1[i].name);
      printf("\t\n%d",a1[i].amount);
      printf("\n");
    }



}
void deposit()
{
  int amt,i ,f=0;
  int account_no;
  printf("\n enter  an account number :");
  scanf("%d",&account_no);
  for(i=1;i<=3;i++)
   {
     if(a1[i].acc_no==account_no)
	{
	    f=1;
	    printf("name :%ls",a1[i].name);
	    printf("\nenter an amount for deposit :");
	    scanf("%d",&amt);
	    if(amt<0)
	     printf("invalid amount");
	    else
	     a1[i].amount=a1[i].amount+amt;
	     break;
	}
   }
   if(f==0)
    printf("\ninvalid account number ");
}
void withdrawal()
{
  int amt,i,f=0;
  int account_no;
  printf("\n enter  an account number :");
  scanf("%d",&account_no);
  for(i=1;i<=3;i++)
   {
     if(a1[i].acc_no==account_no)
	{
	    f=1;
	    printf("\nname :%ls",a1[i].name);
	    printf("\nenter an amount for withdrawal :");
	    scanf("%d",&amt);
	    if(amt<0||amt>a1[i].amount)
	     printf("\ninvalid amount or insufficent balance");
	    else
	     a1[i].amount=a1[i].amount-amt;
	     break;
	}
   }
   if(f==0)
    printf("\ninvalid account number ");
}
void balance()
{
  int account_no,i;
  printf("\n enter  an account number :");
  scanf("%d",&account_no);
  for(i=1;i<=3;i++)
   {
     if(a1[i].acc_no==account_no)
      {
	printf("\n account no:%d",a1[i].acc_no);
	printf("\n name :%s",a1[i].name);
	printf("\n balance is %d",a1[i].amount);

      }

    }

}



