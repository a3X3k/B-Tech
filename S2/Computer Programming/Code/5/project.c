//c project on quiz game by S.Abhishek
//AM.EN.U4CSE19147

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
int main()
{
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     printf("\n\n\t\t\t****************************************");
     printf("\n\n\t\t\t\t    << QUIZ GAME >>");
     printf("\n\n\t\t\t****************************************");
     printf("\n\n\t\t\t\t  ! ... WELCOME ... ! ");
     printf("\n\n\t\t\t\t\t  TO ");
     printf("\n\n\t\t\t\t   BE A MILLIONAIRE ");
     printf("\n\n\t\t\t****************************************");
     printf("\n\n\t\t\t BECOME RICH EARN UPTO 1 MILLION $ ;-) ");
     printf("\n\n\t\t\t****************************************");
     printf("\n\t\t\t > Press S to START the game");
     printf("\n\t\t\t > Press V to VIEW the highest score  ");
     printf("\n\t\t\t > Press R to RESET score");
     printf("\n\t\t\t > press H for HELP            ");
     printf("\n\t\t\t > press Q to QUIT            ");
     printf("\n\t\t\t________________________________________\n\n");
     choice=toupper(getch());

     if(choice=='V')
	 {
         system("cls");
         show_record();
         system("cls");
         goto mainhome;
	 }

     else if(choice=='H')
	 {
         system("cls");
         help();
         getch();
         system("cls");
	     goto mainhome;
	 }

     else if(choice=='R')
	 {
         system("cls");
         reset_score();
	     getch();
	     goto mainhome;
      }

     else if (choice=='Q')
	 {
         exit(1);
     }

    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tREGISTER YOUR NAME : ");
        gets(playername);
        system("cls");
        printf("\n *********** WELCOME %s to BE A MILLIONAIRE QUIZ GAME *****************",playername);
        printf("\n\n INSTRUCTIONS :");
        printf("\n\n ********************************************************************************");
        printf("\n >> There are 2 rounds in this Quiz Game {1} QUIZZY ROUND & {2} FINAL HEIST ROUND");
        printf("\n >> In QUIZZY round you will be asked a total of 3 questions to test your");
        printf("\n    General Knowledge. You are eligible to enter the next level if you give Atleast 2");
        printf("\n    Right Answers,Otherwise You can't proceed further to the Final Heist Round.");
        printf("\n >> Your game starts with FINAL HEIST ROUND. In this round you will be asked a");
        printf("\n    Total of 10 questions. Each Right Answer will be awarded with 10 points!");
        printf("\n    By this way you can score 100 POINTS :-):-):-):-):-):-):-)!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be Asked Questions Continuously, till Right Answers Are Given");
        printf("\n YOU NEED TO WRITE ONLY THE OPTION ( A (OR) B (OR) C (OR) D)");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!... ALL THE BEST ...!");
        printf("\n\n\nPress Y to start the game!\n");
        printf("\n!.. Press any other key to return to the main menu ...!\n\n");

       if (toupper(getch())=='Y')
		{
            system("cls");
		    goto home;
        }

       else
		{
            system("cls");
            goto mainhome;
        }


     home:
     system("cls");
     count=0;


     for(i=1;i<=3;i++)
     {
        r1=i;
        switch(r1)
        {
                  case 1:
		          printf("\n\nWHICH OF THE FOLLOWING IS THE FIRST CALCULATING DEVICE?");
		          printf("\n\n(A)~ ABACUS\t\t(B)~ CALCULATOR\n\n(C) ~ TURING MACHINE\t\t(D) ~ TURING MACHINE");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\n{ ~ WELL DONE!!! ~ }");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (A) ~ { ABACUS }");
		        getch();
		        system("cls");
		        break;
  	   	}
                  case 2:
		          printf("\n\n");
		          printf("\n\nCHOOSE THE ODD ONE");
		          printf("\n\n(A)~ SUNDAR PICHAI\t\t(B)~ SATHYA NADELLA\n\n(C) ~ SHANTANU NARAYEN\t\t(D) ~ JEFF BEZOS");
		          if (toupper(getch())=='D')
		          {
			        printf("\n\n{ ~ WELL DONE!!! ~ }");
                    count++;
			        getch();
			        system("cls");
			        break;
                 }


        else
	    {
                printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (D) ~ { JEFF BEZOS }");
		        getch();
		        system("cls");
		        break;
  	   	}

        system("cls");

        case 3:


        printf("\n\nWHO IS THE FOUNDER OF ALIBABA");
        printf("\n\n(A)~ MUKESH AMBANI\t\t(B)~ ASHWANI LOHANI\n\n(C) ~ JACK MA\t\t(D) ~ SUDIPTA BATTACHARYA");
        if (toupper(getch())=='C')
		{
            printf("\n\n{ ~ WELL DONE!!! ~ }");
            count++;
			getch();
			system("cls");
            break;
        }


        else
        {
               printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (C) ~ { JACK MA }");
		       getch();
		       system("cls");
               break;
        }
      }
  }


    if(count>=2)
	{
                goto test;
    }

    else
	{
            	system("cls");
            	printf("\n\nSORRY %s YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME",playername);
            	getch();
            	goto mainhome;
	}

     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATIONS %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!... PRESS ANY KEY TO CONTINUE THE GAME ...!");
     if(toupper(getch())=='p')
     {
                              goto game;
     }


     game:
     countr=0;
     for(i=1;i<=10;i++)
     {
                       system("cls");
                       r=i;

     switch(r)
     {
		case 1:
		printf("\n\nFIND THE ODD ONE OUT");
		printf("\n\n(A)~ PRINTER\t\t(B)~ MONITOR\n\n(C) ~ SPEAKER\t\t(D) ~ SCANNER");
		if (toupper(getch())=='D')
		{
		    printf("\n\n{ ~ WELL DONE!!! ~ }");
            countr++;
            getch();
            break;
        }


        else
        {
            printf("\n\n{ ~ SORRY!!! ~ } The correct answer is ( D ) ~ { SCANNER }");
            getch();
            goto score;
            break;
        }

    	case 2:
		printf("\n\n\nWHAT IS THE EXPANSION OF HP IN TERMS OF TECH GAINTS?");
		printf("\n\n(A)~ HEWLETT PACKARD\t\t(B)~ HIGH PERFORMANCE\n\n(C) ~ HALB PENSION\t\t(D) ~ HINDUSTAN PETROLEUM");
		if (toupper(getch())=='A')
		{
                    printf("\n\n{ ~ WELL DONE!!! ~ }");
                    countr++;
                    getch();
			        break;
         }


    	else
        {
                    printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (A) ~ { HEWLETT PACKARD }");
                    getch();
	                goto score;
		            break;
	     }

        case 3:
		printf("\n\n\nNOT AN AMAZON PRODUCT");
		printf("\n\n(A)~ ALEXA\t\t(B)~ FIRE DEVICES\n\n(C) ~ RING DEVICE\t\t(D) ~OWLET ");
		if (toupper(getch())=='D')
		{
                     printf("\n\n{ ~ WELL DONE!!! ~ }");
                     countr++;
                     getch();
			         break;
                     }
		else
	    {
                    printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (D) ~ { OWLET }");
                    getch();
		            goto score;
		            break;
                    }

        case 4:
		printf("\n\n\nWHO IS THE CEO OF APPLE?");
        printf("\n\n(A)~ TIMCOOK\t\t(B)~ STEVE JOBS\n\n(C) ~ STEVE WOZNIAK\t\t(D) ~ RONALD WAYNE");
		if (toupper(getch())=='A')
		{
                                  printf("\n\n{ ~ WELL DONE!!! ~ }");
                                  countr++;
                                  getch();
			                      break;
                                  }

        else
        {
                printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (A) ~ { TIMCOOK }");
                getch();
       	        goto score;
		        break;
		       }


        case 5:
		printf("\n\n\nWHICH OF THE FOLLOWING IS NOT THE WEB BROWSER?");
		printf("\n\n(A)~ VIVALDI\t\t(B)~ MOZILLA\n\n(C) ~ CHROME\t\t(D) ~ DREAM WEAVER");
		if(toupper(getch())=='B')
		{
                                 printf("\n\n{ ~ WELL DONE!!! ~ }");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (D) ~ { DREAM WEAVER }");
		       getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\nWHO FOUNDED C LANGUAGE?");
        printf("\n\n(A)~ BJARNE STROUSTRUP\t\t(B)~ DENNIS RITCHIE\n\n(C) ~ JAMES JOSLING\t\t(D) ~ GUIDO VAN ROSSUM");
		if (toupper(getch())=='B')
		{
                                 printf("\n\n{ ~ WELL DONE!!! ~ }");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (B) ~ { DENNIS RITCHIE }");
		       getch();
		       goto score;
		       break;
		       }

		case 7:
		printf("\n\n\nINFORMATION TRAVELS BETWEEN THE COMPONENTS OF THE MOTER BOARD THROUGH");
        printf("\n\n(A)~ FLASH MEMORY\t\t(B)~ CMOS\n\n(C) ~ BAYS\t\t(D) ~ BUSES");
		if(toupper(getch())=='D')
		{
                printf("\n\n{ ~ WELL DONE!!! ~ }");
                countr++;
                getch();
                break;}
		else
        {
		       printf("\n\n{ ~ SORRY!!! ~ } The correct answer is () ~ {  }");
		       getch();
		       goto score;
		       break;
		       }
        case 8:
		printf("\n\n\nTHE _____ SHOWS ALL THE WEBSITES YOU HAVE VISITED.");
		printf("\n\n(A)~ HISTORY\t\t(B)~ WEBPAGE\n\n(C) ~ SEARCH ENGINE\t\t(D) ~ CONSOLE");
		if(toupper(getch())=='A')
		{
                                 printf("\n\n{ ~ WELL DONE!!! ~ }");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (A) ~ { HISTORY }");
		       getch();
		       goto score;
		       break;
		       }
        case 9:
		printf("\n\n\nWWW PROVIDES STANDARDIZED ACCESS TO");
        printf("\n\n(A)~ GOPHER\t\t(B)~ TELENET\n\n(C) ~ FTP\t\t(D) ~ ALL THE ABOVE");
		if(toupper(getch())=='D')
		{
                                 printf("\n\n{ ~ WELL DONE!!! ~ }");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (D) ~ { ALL THE ABOVE }");
		       getch();
		       goto score;
		       break;
		       }
        case 10:
     	printf("\n\n\nCOMPUTER CANNOT BOOT IF IT DOESNT HAVE : ");
		printf("\n\n(A)~ ASSEMBLER\t\t(B)~ PROCESSOR\n\n(C) ~ OPERATING SYSTEM\t\t(D) ~ COMPILER");
		if(toupper(getch())=='C')
		{
                                 printf("\n\n{ ~ WELL DONE!!! ~ }");
                                 countr++;
                                 getch();
                                 break;

                                 }
		else
        {
		       printf("\n\n{ ~ SORRY!!! ~ } The correct answer is (C) ~ { OPERATING SYSTEM }");
		       getch();
		       goto score;
		       break;
		       }

		}
  }


	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATIONS %s *****************",playername);
       printf("\n\t You won $%.2f",score);
       goto go;
    }

	 else if(score==1000000.00)
	 {
	    printf("\n\n\n \t\t**************** CONGRATULATION %s ****************",playername);
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t\t\t You won $%.2f",score);
	    printf("\n\t\t\t\t Thank You !!");
	 }
	 else
     {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t THANKS FRO YOUR PARTICIPATION");
	    printf("\n\t\t TRY AGAIN");
        goto go;
     }

	go:
	puts("\n\n PRESS Y IF YOU WANT TO PLAY THE GAME");
	puts("PRESS ANY KEY TO GOT TO MAIN MENU");
	if (toupper(getchar())=='Y')
	{
		goto home;
    }
    else
    {
        edit_score(score,playername);
        goto mainhome;
    }
    }
}

void show_record()
{

	 char name[20];
	 float scr=0;
	 FILE *f;
	 f=fopen("score.txt","r");
	 fscanf(f,"%s%f",&name,&scr);
	 printf("\n\n\t\t*************************************************************");
	 printf("\n\n\t\t %s HAS SECURED HIGHEST SCORE %f",name,scr);
	 printf("\n\n\t\t*************************************************************");
	 fclose(f);
	 getch();
}

void reset_score()
{
    system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
}

void help()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t\t              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......... !... BE A MILLIONAIRE ...! ..........");
    printf("\n >> There are 2 rounds in this Quiz Game {1} QUIZZY ROUND & {2} FINAL HEIST ROUND");
    printf("\n >> In QUIZZY round you will be asked a total of 3 questions to test your");
    printf("\n    General Knowledge. You are eligible to enter the next level if you give Atleast 2");
    printf("\n    Right Answers,Otherwise You can't proceed further to the Final Heist Round.");
    printf("\n >> Your game starts with FINAL HEIST ROUND. In this round you will be asked a");
    printf("\n    Total of 10 questions. Each Right Answer will be awarded with 10 points!");
    printf("\n    By this way you can score 100 POINTS :-):-):-):-):-):-):-)!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be Asked Questions Continuously, till Right Answers Are Given");
    printf("\n YOU NEED TO WRITE ONLY THE OPTION ( A (OR) B (OR) C (OR) D)");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t********** GAME BY S.ABHISHEK { AM.EN.U4CSE19147 } **********");}

void edit_score(float score, char playernm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  {
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",playernm,sc); //PRINT IN PLAYER NAME.
	    fclose(f);
      }
}
