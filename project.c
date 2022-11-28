#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_REG 100

struct data
{
    char name1[100];
    char name2[100];
    char day[20];
    char month[20];
    char year[20];
    char division[20];
    char district[20];
    int age;
    char gender[10];
    char nid[10];
    char mobilenumber[12];
    char username[100];
    char password[100];
    int supply;
} person[MAX_REG];

int i=0;
int new_age=18;

void generalNews();
void fillStructure();
void usermenu();
void printStructure();
void userlogin();
void adminlogin();
void members();
void registrationform();

int main()
{
    int input;
    while(1)
    {
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

        switch(input)
        {
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
void members()
{
    printf("\n\t DEVELOPED BY \n");
    sleep(2);

    printf("\n\t\tIKHTIAR HOSSEN\n\n\n\t\t\tSumaia Akter Farha\n\n");
    sleep(2);
}
void generalNews()
{
    if(!person[i].supply)
    {

        person[i].supply=30;

        printf("\n\tTodays available dose is %d\n",person[i].supply);
    }
    else
    {
        printf("\n\tTodays available dose is %d\n",person[i].supply);
    }
}
void fillStructure()
{
    system("cls");
    int x;

    FILE *in;

    in = fopen("info.txt", "a");
    if(in == NULL)
    {
        printf("ERROR!");
        exit(0);
    }


    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tFirst Name: ");
    gets(person[i].name1);
    fflush(stdin);
    printf("\t\t\t\t\t\tLast Name: ");
    gets(person[i].name2);
    fflush(stdin);


    printf("\n\t\t\t\t\t\tEnter gender>: ");
    gets(person[i].gender);
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


    printf("\n\t\t\t\t\t\tDate of birth(according to NID card): \n");
    printf("\t\t\t\t\t\tYear: ");
    gets(person[i].year);
    printf("\t\t\t\t\t\tMonth: ");
    gets(person[i].month);
    printf("\t\t\t\t\t\tDay: ");
    gets(person[i].day);

    printf("\n\t\t\t\t\t\tPresent address:\n");
    printf("\t\t\t\t\t\tDivision: ");
    gets(person[i].division);
    printf("\t\t\t\t\t\tDistrict: ");
    gets(person[i].district);
    fflush(stdin);

    for(; ;)
    {
        printf("\n\t\t\t\t\t\tEnter Mobile Number>: ");
        gets(person[i].mobilenumber);
        fflush(stdin);
        int a=strlen(person[i].mobilenumber);
        if(a==11)break;
        else printf("\n\t\t\t\t\t\tInvalid Input\n");
    }

    do
    {
        printf("\n\t\t\t\t\t\tEnter nid(must be exactly 7 characters long)>: ");
        gets(person[i].nid);
        x = strlen(person[i].nid);

    }
    while(x<7 || x >7);




    fflush(stdin);

    system("cls");
    printf("\n\n\n\t\t\t\t\t\t       USER LOGIN\n\n");

    while(1)
    {
        printf("\n\n\t\t\t\t\t\tUsername cannot have spaces\n");
        printf("\n\t\t\t\t\t\tThe username must be of 5 or more characters\n");
        printf("\n\t\t\t\t\t\tPlease enter a username to login later>: ");
        scanf("%s", person[i].username);
        system("cls");


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

    fprintf(in,"%s %s %s %d %s %s %s %s %s %s %s %s %s\n", person[i].name1,person[i].name2,person[i].gender,person[i].age,person[i].year,person[i].month,person[i].day,person[i].division,person[i].district,person[i].mobilenumber,person[i].nid,person[i].username,person[i].password);
    fclose(in);


    printf("REGISTRATION COMPLETE\n \n");

    printf("Press enter to continue \n");
    getch();


    printf("\n\n\n");

    i +=1;

    usermenu();
}
void userlogin()
{
    int input;

    while(1)
    {

        system("cls");
        printf("\n\t----------------------" );
        printf("\n\t MAIN MENU" );
        printf("\n\t1. View your registration Info");
        printf("\n\t2. View your registration Form");
        printf("\n\tEnter 0 to go back." );
        printf("\n\t----------------------" );
        printf("\n\tEnter choice>");
        scanf("%d", &input);


        if(input == 0)
        {
            break;
        }
        else if(input==1){
            viewinfo();
            printf("\n\nPress enter to continue\n");
            getch();
        }
        else if(input==2){
        	viewform();
        	printf("\n\nPress enter to continue\n");
        	getch();
		}
        else printf("Invalid Input\n");
        
    }

}
void viewform(){
	   char  user[100], pass[100];
    int j, found =0;

    fflush(stdin);
    printf("Enter UserName: ");
    gets(user);

    char view_name1[50],view_name2[50], view_gender[10], view_nid[10],view_username[30], view_password[30],view_year[10],view_month[10],view_day[10],view_division[20],view_district[20],view_mobile[12];
    int view_age;

    FILE *out;

    out = fopen("info.txt", "r");

    if(out == NULL)
    {
        printf("ERROR!");
        exit(1);
    }
    while(fscanf(out,"%s %s %s %d %s %s %s %s %s %s %s %s %s\n", view_name1,view_name2,view_gender,&view_age,view_year,view_month,view_day,view_division,view_district,view_mobile,view_nid,view_username,view_password) !=EOF
         )
    {
        if(strcmp(view_username, user)==0)
        {
            found = 1;
            printf("Enter password>");
            gets(pass);
            fflush(stdin);
            if(strcmp(view_password, pass)==0)
            {
                system("cls");

                 printf("\n\n\n----------------------------------------------------------------------------------------------\n");
                 printf("----------------------------------------------------------------------------------------------\n");
                 printf("----------------------------------------------------------------------------------------------\n");
                 printf("                                   YOUR VACCINATION FORM                                      \n\n\n");
                 printf("Name of the Applicant: %s %s\n",view_name1,view_name2);
                 printf("Date of Birth: %s-%s-%s\n",view_day,view_month,view_year);
                 printf("Your Centre For Vaccination: %s Govt. Medical Hospital, %s, Bangladesh\n\n\n",view_district,view_division);
                 printf("The date and time of your next vaccination will be soon notify via SMS in the number you provided.\n");
                 printf("                            till then STAY SAFE, STAY HOME!                                   \n");
                 printf("\n\n\n----------------------------------------------------------------------------------------------\n");
                 printf("----------------------------------------------------------------------------------------------\n");
                 printf("----------------------------------------------------------------------------------------------\n\n\n");

                printf("\n\n\n");

            }
            else
            {
                printf("Invalid Password\n");
            }
        }

    }
    if(found==0)printf("Invalid Username");
    fclose(out);
	
}
void viewinfo()
{
    char  user[100], pass[100];
    int j, found =0;

    fflush(stdin);
    printf("Enter UserName: ");
    gets(user);

    char view_name1[50],view_name2[50], view_gender[10], view_nid[10],view_username[30], view_password[30],view_year[10],view_month[10],view_day[10],view_division[20],view_district[20],view_mobile[12];
    int view_age;

    FILE *out;

    out = fopen("info.txt", "r");

    if(out == NULL)
    {
        printf("ERROR!");
        exit(1);
    }
    while(fscanf(out,"%s %s %s %d %s %s %s %s %s %s %s %s %s\n", view_name1,view_name2,view_gender,&view_age,view_year,view_month,view_day,view_division,view_district,view_mobile,view_nid,view_username,view_password) !=EOF
         )
    {
        if(strcmp(view_username, user)==0)
        {
            found = 1;
            printf("Enter password>");
            gets(pass);
            fflush(stdin);
            if(strcmp(view_password, pass)==0)
            {
                system("cls");

                printf("name>%s %s\n\n", view_name1,view_name2);
                printf("gender>%s\n\n", view_gender);
                printf("age>%d\n\n", view_age);
                printf("Date Of Birth>%s - %s - %s\n\n",view_day,view_month,view_year);
                printf("Division: %s\n\n",view_division);
                printf("District: %s\n\n",view_district);
                printf("Mobile>%s\n\n", view_mobile);
                printf("nid> %s\n", view_nid);

                printf("\n\n\n");

            }
            else
            {
                printf("Invalid Password\n");
            }
        }

    }
    if(found==0)printf("Invalid Username");
    fclose(out);
}

void adminview();
void eligibility();
void shots();

void adminlogin()
{
    system("cls");

    char admin_user[100] = "admin";
    char admin_pass[100] = "adminpass";
    int input;


    char user[100], pass[100];

    printf("\n\n\t");
    printf("Enter username:");
    scanf("%s",user);
    printf("\tEnter password:");
    scanf("%s",pass);
    printf("\n");

    if (strcmp(user, admin_user) ==0 && strcmp(pass, admin_pass) == 0)
    {
        printf("\nAccess granted.\n");
        printf("Press enter to continue\n");
        getch();
        while(1)
        {

            system("cls");
            printf("\n\t----------------------" );
            printf("\n\t ADMIN MENU" );
            printf("\n\t1. View all registrations" );
            printf("\n\t2. Change number of shots" );
            printf("\n\t3. Change minimum age" );
            printf("\n\tEnter 0 to go back." );
            printf("\n\t----------------------" );
            printf("\n\tEnter choice>");
            scanf("%d", &input);

            if(input == 0)
            {
                break;
            }

            switch(input)
            {
            case 1:
                adminview();
                break;

            case 2:
                shots();
                break;

            case 3:
                eligibility();
                break;
            }

            printf("\nPress enter to continue");
            getch();

        }
    }

    else
    {
        printf("\nACCESS DENIED\n");

    }
}


void adminview()
{
    system("cls");
    int j;

    printf("\n\tViweing all registrations\n");

    FILE *out;

    out = fopen("info.txt", "r");

    char view_name1[50],view_name2[50], view_gender[10], view_nid[10],view_username[30], view_password[30],view_year[10],view_month[10],view_day[10],view_division[20],view_district[20],view_mobile[12];
    int view_age;

    while(fscanf(out,"%s %s %s %d %s %s %s %s %s %s %s %s %s\n", view_name1,view_name2,view_gender,&view_age,view_year,view_month,view_day,view_division,view_district,view_mobile,view_nid,view_username,view_password) !=EOF
         )
    {

        printf("name>%s %s\n\n", view_name1,view_name2);
        printf("gender>%s\n\n", view_gender);
        printf("age>%d\n\n", view_age);
        printf("Date Of Birth>%s - %s - %s\n\n",view_day,view_month,view_year);
        printf("Division: %s\n\n",view_division);
        printf("District: %s\n\n",view_district);
        printf("Mobile>%s\n\n", view_mobile);
        printf("nid> %s\n", view_nid);

        printf("\n\n\n");

    }

}

void eligibility()
{

    printf("\nEnter new age here>\n");
    scanf("%d", &new_age);

    printf("%d set as new age successfully!\n", new_age);
}

void shots()
{
    printf("\nEnter new available daily shots here>\n");
    scanf("%d", &person[i].supply);

    printf("%d set as new daily shots!\n", person[i].supply);
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
        printf("\n\t1.Registration Form");
        printf("\n\t2.View your registration Info");
        printf("\n\t0.Goback");
        printf("\n\t----------------------" );

        printf("\n\tEnter input: ");
        scanf("%d", &in);

        if(in==1)
        {
            system("cls");
            registrationform();
            printf("Press enter to continue");
            getch();
        }

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

    printf("name>%s %s\n\n", person[i-1].name1,person[i-1].name2);
    printf("gender>%s\n\n", person[i-1].gender);
    printf("age>%d\n\n", person[i-1].age);
    printf("Date Of Birth>%s - %s - %s\n\n",person[i-1].day,person[i-1].month,person[i-1].year);
    printf("Division: %s\n\n",person[i-1].division);
    printf("District: %s\n\n",person[i-1].district);
    printf("Mobile>%s\n\n", person[i-1].mobilenumber);
    printf("nid> %s\n", person[i-1].nid);

    printf("\n\n\n");



}

registrationform(){
    printf("\n\n\n----------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("                                   YOUR VACCINATION FORM                                      \n\n\n");
    printf("Name of the Applicant: %s %s\n",person[i-1].name1,person[i-1].name2);
    printf("Date of Birth: %s-%s-%s\n",person[i-1].day,person[i-1].month,person[i-1].year);
    printf("Your Centre For Vaccination: %s Govt. Medical Hospital, %s, Bangladesh\n\n\n",person[i-1].district,person[i-1].division);
    printf("The date and time of your next vaccination will be soon notify via SMS in the number you provided.\n");
    printf("                            till then STAY SAFE, STAY HOME!                                   \n");
    printf("\n\n\n----------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------\n\n\n");
}
