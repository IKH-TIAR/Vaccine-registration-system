#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_REG 100

struct data{
	char name[100];
    int age;
    char gender[10];
    char nid[10];
    char mobilenumber[12];
    char username[100];
    char password[100];
    int supply;
}person[MAX_REG];

int i=0;
int new_age=18;

void generalNews();
void fillStructure();
void usermenu();
void printStructure();
void userlogin();
void adminlogin();
void members();

int main(){
	int input;
	while(1){
	system("cls");	
        printf("\n\n\n\n\t\t\t\t\t\t----------------------" );
		printf("\n\t\t\t\t\t\t MAIN MENU" );
		printf("\n\t\t\t\t\t\t1. General Information." );
		printf("\n\t\t\t\t\t\t2. Register for vaccine." );
		printf("\n\t\t\t\t\t\t3. Use as user." );
		printf("\n\t\t\t\t\t\t4. Use as Admin." );
		printf("\n\t\t\t\t\t\t5. To view developers");
		printf("\n\t\t\t\t\t\tEnter 0 to exit." );
        printf("\n\t\t\t\t\t\t----------------------" );
        printf("\n\t\t\t\t\t\tEnter choice ");
        scanf("%d",&input);
	
	switch(input){
		case 1:
			system("cls");
			generalNews();
			printf("Press enter to continue: ");
			getch();
			break;
		case 2:
		    system("cls");
		    fillStructure();
		    printf("Press enter to continue: ");
		    getch();
		    break;
		case 3:
		    system("cls");
			userlogin();
			printf("Press enter to continue: ");
			getch();
			break;
		case 4:
		    system("cls");
			adminlogin();
			printf("Press enter to continue: ");
			getch();
			break;
		case 5:
		    system("cls");
		    members();
		    printf("Press enter to continue: ");
		    getch();
		    break;
		    
		case 0: 
		    return 0;
		    break;
			   
		default:
			printf("!!Invalid Input!!\nPress enter and Read Instruction Carefully: ");
			break;					
	}
}
	
}
void members(){
	printf("Developed By");
	getch();
}
void generalNews(){
}
void fillStructure(){
	system("cls");
	int x;
	    fflush(stdin);

        printf("\n\n\n\n\t\t\t\t\t\tEnter name(no spaces)>: ");
         gets(person[i].name);
         fflush(stdin);

         printf("\n\t\t\t\t\t\tEnter age(minimum age is %d)>: ", new_age);
         scanf("%d", &person[i].age);

         if(person[i].age< new_age)
         {
         printf("\n\t\t\t\t\t\tYou are too young to take the vaccine\n");
         printf("\n\t\t\t\t\t\tPress enter to continue\n");
         getch();
         return 0;
         }

         fflush(stdin);

         printf("\n\t\t\t\t\t\tEnter gender>: ");
         gets(person[i].gender);
         fflush(stdin);
         
         printf("\n\t\t\t\t\t\tEnter Mobile Number>: ");
         gets(person[i].mobilenumber);
         fflush(stdin);
         int a=strlen(person[i].mobilenumber);
         if(a>11)printf("Invalid Mobile Number");

         do
         {
           printf("\n\t\t\t\t\t\tEnter nid(must be exactly 7 characters long)>: ");
           gets(person[i].nid);
           x = strlen(person[i].nid);

         }while(x<7 || x >7);




    fflush(stdin);
    
    system("cls");
    printf("\n\n\n\t\t\t\t\t\t USER LOGIN\n\n");
    
    while(1)
    {
         printf("\n\n\n\t\t\t\t\t\t Username cannot have spaces\n");
         printf("\n\t\t\t\t\t\tThe username must be of 5 or more characters\n");
         printf("\n\t\t\t\t\t\tPlease enter a username to login later>: ");
         scanf("%s", person[i].username);


         printf("\n\n\n\t\t\t\t\t\tThe password must be of 5 or more characters\n");
         printf("\n\t\t\t\t\t\tDon't use spaces while setting your password\n\n");

         printf("\n\t\t\t\t\t\tPlease enter a password>: ");
         scanf("%s", person[i].password);

              if(strlen(person[i].password)>=5 && strlen(person[i].username) >=5)
              {
                     break;
              }

           printf("\n\n\t\t\t\t\t\tUser name or password provided doesn't comply with the instructions given\n");
           printf("\n\t\t\t\t\t\tPlease press enter and try again\n");
           getch();
           system("cls");
           

    }
    printf("REGISTRATION COMPLETE\n \n");
    printf("Press enter to continue \n");
    getch();


    printf("\n\n\n");

      i +=1;

      usermenu();
}
void userlogin(){
}
void adminlogin(){
}
void usermenu()
{
    int in;
              system("cls");
               while(1)
               {
                   system("cls");

                  printf("\n\t----------------------" );
                  printf("\n\n");
                  printf("\n\t2.View your registration");

                  printf("\n\t0.Goback");
                  printf("\n\t----------------------" );

                  printf("\n\tEnter input: ");
                  scanf("%d", &in);

                  if(in == 2)
                  {
                      system("cls");
                      printf("\n\n");
                     printStructure();
                     printf("Press enter to continue");
                     getch();
                  }


                  if(in == 0)
                  {
                      break;
                  }
               }
}

void printStructure()
{
     system("cls");

                printf("name>%s\n", person[i-1].name);

                printf("age>%d\n", person[i-1].age);

                printf("gender>%s\n", person[i-1].gender);
                printf("gender>%s\n", person[i-1].mobilenumber);

                printf("nid> %s", person[i-1].nid);

                printf("\n\n\n");



}