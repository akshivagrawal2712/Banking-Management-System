#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void creation(); 
void deposit(); 
void withdraw(); 
void bal();
void time(); 
int a=0,i = 101; 
struct bank 
{ 
        int no; 
        char name[20]; 
        float bal; 
        float dep; 
}s[20]; 
        int main() 
       { 
                  int ch; 
                  while(1) 
                        { 
                              system("cls");
                              printf("\n\t\t\t-------------------------------------------------------------------------"); 
                              printf("\n\t\t\t\t\t\tBANKING MANAGEMENT SYSTEM"); 
                              printf("\n\t\t\t-------------------------------------------------------------------------"); 
                              printf("\n1-Creation"); 
                              printf("\n2-Deposit"); 
                              printf("\n3-Withdraw"); 
                              printf("\n4-Balance Enquiry"); 
                              printf("\n5-Exit"); 
                              printf("\nEnter your choice : "); 
                              scanf("%d",&ch); 
                              switch(ch) 
                                       { 
                                              case 1: creation(); 
                                                         break; 
                                              case 2: deposit(); 
                                                         break; 
                                              case 3: withdraw(); 
                                                         break; 
                                              case 4: bal(); 
                                                         break; 
                                              case 5: exit(0); 
                                                         defalut: printf("Enter 1-5 only"); 
                                                         getch(); 
                                        } 
                         } 
        } 
             void creation() 
        { 
                   printf("\n\t\t\t-----------------------------------------------"); 
                   printf("\n\t\t\t\t\tACCOUNT CREATION "); 
                   printf("\n\t\t\t-----------------------------------------------"); 
                   printf("\nYour Account Number is :%d",i);
                              s[a].no = i; 
                   printf("\nEnter your Name:"); 
                              scanf("%s",s[a].name); 
                   printf("\nYour Deposit is Minimum Rs.500"); 
                              s[a].dep=500; 
                              a++; 
                              i++; 
                              getch(); 
         } 
              void deposit() 
        { 
                   int no,b=0,m=0; 
                   float aa; 
                   printf("\n\t\t\t---------------------------"); 
                   printf("\n\t\t\t\t  DEPOSIT "); 
                   printf("\n\t\t\t---------------------------"); 
                   printf("\nEnter your Account Number"); 
                   scanf("%d",&no); 
                   for(b=0;b<i;b++) 
                       { 
                           if(s[b].no == no) 
                               m = b; 
                       } 
                           if(s[m].no == no) 
                             { 
                                        printf("\n Account Number : %d",s[m].no); 
                                        printf("\n Name : %s",s[m].name); 
                                        printf("\n Deposit : %f",s[m].dep); 
                                        printf("\n How Much Deposited Now:"); 
                                        scanf("%f",&aa); 
                                        s[m].dep+=aa;
										printf("\nDate & Time of deposition: ");
										time(); 
                                        printf("\nDeposit Amount is :%f\n",s[m].dep); 
                                        getch();
										 
                             } 
                            else 
                             { 
                                       printf("\nACCOUNT NUMBER IS INVALID"); 
                                       getch(); 
                              } 
         } 
             void withdraw() 
         { 
                    int no,b=0,m=0; 
                    float aa; 
                    printf("\n\t\t\t---------------------------"); 
                    printf("\n\t\t\t\t  WITHDRAW "); 
                    printf("\n\t\t\t---------------------------"); 
                    printf("\nEnter your Account Number"); 
                    scanf("%d",&no); 
                    for(b=0;b<i;b++) 
                        { 
                               if(s[b].no == no) 
                                 m = b; 
                        } 
                              if(s[m].no == no) 
                                 { 
                                        printf("\n Account Number : %d",s[m].no); 
                                        printf("\n Name : %s",s[m].name); 
                                        printf("\n Deposit : %f",s[m].dep); 
                                        printf("\n How Much Withdraw Now:"); 
                                        scanf("%f",&aa); 
                                        if(s[m].dep<aa+500) 
                                           { 
                                                  printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE"); 
                                                  getch(); 
                                           } 
                                          else 
                                           { 
                                           		printf("\nDate & Time of Withdrawl : ");
                                                  time();
                                                  s[m].dep-=aa; 
                                                  printf("\nThe Balance Amount is:%f",s[m].dep); 
                                            } 
                                 } 
                               else 
                                { 
                                      printf("INVALID"); 
                                      getch(); 
                                } 
                                      getch(); 
          } 
                void bal() 
          { 
                  int no,b=0,m=0; 
                  float aa; 
                  printf("\n\t\t\t------------------------------"); 
                  printf("\n\t\t\t\tBALANCE ENQUIRY "); 
                  printf("\n\t\t\t------------------------------");
                  printf("\nEnter your Account Number"); 
                  scanf("%d",&no); 
                  for(b=0;b<i;b++)        
                      { 
                           if(s[b].no == no) 
                             m = b; 
                      } 
                           if(s[m].no==no) 
                              { 
                                    printf("\n Account Number : %d",s[m].no); 
                                    printf("\n Name : %s",s[m].name); 
                                    printf("\n Deposit : %f",s[m].dep); 
                                    getch(); 
                              } 
                             else 
                             { 
                                    printf("INVALID"); 
                                    getch(); 
                              } 
            } 
void time()
{
	time_t t=time(NULL);
	struct tm*tm=localtime(&t);
	char s[64];
	strftime(s,sizeof(s),"%c",tm);
	printf("%s \n",s);
}
