#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void generalNews();
void fillStructure();
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
}
void userlogin(){
}
void adminlogin(){
}