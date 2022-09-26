#include<stdio.h>
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
    printf("Developed By");
    getch();
}
void generalNews()
{
}
void fillStructure()
{
    system("cls");
    int x;

    FILE *in;

    in = fopen("info.txt" , "a");
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

    fprintf(in ,"Name = %s %s\n Gender= %s\n Age=%d\n Date Of Birth=%s-%s-%s\n Division= %s\n  District= %s\n Mobile No.= %s\n NID= %s\n User name= %s\n Password= %s\n" , person[i].name1 ,person[i].name2 ,person[i].gender ,person[i].age ,person[i].year ,person[i].month ,person[i].day ,person[i].division ,person[i].district ,person[i].mobilenumber ,person[i].nid ,person[i].username ,person[i].password);
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
}
void adminlogin()
{
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

registrationform()
{
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

