/*This program is a quiz game to test a subject matter experts knowledge in Cyber Security*/

//Pre-Processor Statements
#include<stdio.h>
#include<stdlib.h>  
#include<iostream>

//Create identifier
void start();

//Start of function
int main(int argc, char** argv)
{
    int chc = 0;

    //welcome message printed to screen  
    printf("The game will start soon, please Press 1 to start the game\n or you can press 0 to exit :   ");
    scanf("%d", &chc);

    //Give user choice between starting quiz or exiting 
    switch (chc)
    {
    case 1:
        start();
        break;

    case 2:
        exit(1);
    }
    // Receive input from user 
    fflush(stdin);
    getchar();
}

//Start of function for quiz questions
void start()
{
    //string definition
    int ans;
    //definition / initialization
    int points = 0, wrongAttempts = 0;
    //Loop Start, Loop will end once 5th question is reached and answered
    while (points < 5 & wrongAttempts < 5)
    {
        printf("******************* This is a Quiz to test your knowledge on Cyber Security! *************************** \n\n");

        printf("Q(1). Software designed to prevent, detect and eradicate malicious software, such as a virus. \n 1.Anti-Malware Software \t\t2.Anti-Phishing software\n 3.Bloat ware\t\t\t\t  4.None of the above\n\n");

        printf("Your answer: ");
        scanf("%d", &ans);

        //Conditional Statement to determine if answer is correct  
        if (ans == 1)
        {
            printf("Correct! +1 points. You now have %d points\n\n", ++points);


        }//if answer to conditional does not ==1 then else condition will print
        else
        {
            printf("Wrong answer! Correct answer is 1.Anti-Malware Software. You have answered %d questions incorrectly\n\n", ++wrongAttempts);
           
        }
        printf("Q(2). What is A network of computers infected with malicious software and controlled without the owners knowledge. \n 1.Botnet \t\t2.Anti-Phishing software\n 3.Bloat ware\t\t\t\t  4.None of the above\n\n");

        printf("Your answer: ");
        scanf("%d", &ans);

        if (ans == 1)
        {
            printf("Correct! +1 points. You now have %d points\n\n", ++points);

        }
        else
        {
            printf("Wrong answer! Correct answer is 1.Botnet. You have answered %d questions incorrectly\n\n", ++wrongAttempts);
            
        }

        printf("Q(3). An attempt to disrupt a network/business/organisation by issuing more requests than a system is able to cope with, it can be performed with malicious intent or as a protest\n 1.Denial Of Service \t\t2.Anti-Phishing software\n 3.Bloat ware\t\t\t\t  4.None of the above\n\n");

        printf("Your answer: ");
        scanf("%d", &ans);

        if (ans == 1)
        {
            printf("Correct! +1 points. You now have %d points\n\n", ++points);

        }
        else if (wrongAttempts < 3)
        {
            printf("Wrong answer! Correct answer is 1.Denial Of Service. You have answered %d questions incorrectly\n\n", ++wrongAttempts);
            
        }

        printf("Q(4). A method that is used to attempt to ensure data security by use of encrypted (secret) code \n 1.Encryption \t\t2.Anti-Phishing software\n 3.Bloat ware\t\t\t\t  4.None of the above\n\n");

        printf("Your answer: ");
        scanf("%d", &ans);

        if (ans == 1)
        {
            printf("Correct! +1 points. You now have %d points\n\n", ++points);

        }
        else
        {
            printf("Wrong answer! Correct answer is 1.Encryption. You have answered %d questions incorrectly\n\n", ++wrongAttempts);
            
        }

        printf("Q(5). Software that is designed to protect a computer system/network from unauthorised access and intrusion\n 1.Firewall \t\t2.Anti-Phishing software\n 3.Bloat ware\t\t\t\t  4.None of the above\n\n");

        printf("Your answer: ");
        scanf("%d", &ans);

        if (ans == 1)
        {
            printf("Correct! +1 points. You now have %d points\n\n", ++points);

        }
        else
        {
            printf("Wrong answer! Correct answer is 1.Encryption. You have answered %d questions incorrectly\n\n", ++wrongAttempts);
            
        }
        printf("QUIZ COMPLETE!");
    }
}
