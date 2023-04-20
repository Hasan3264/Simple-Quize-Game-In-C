#include<stdio.h>

int main(){
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    int total1, total2, total3;
    printf(" Welcome to the Quiz game!\n\n");
    printf("> press 1 to start the game \n");
    printf ("> press 0 to exit the game");
     
    scanf("%d", &i);

    if (i == 1){
        printf("The game is Started \n");
    }
    else if(i==0){
        printf("the game is closed \n");
    }
    else{
        printf("Invalide \n");
    }
    if(i==1){
        printf ("(1) Which One in the first search ingine in world? \n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wise\n");
        printf("4) Altavista\n");
        printf("enter your correct answer:- ");
        scanf("%d", &ans1);
        if (ans1 == 2)
        {
            printf("Correct answer: \n");
            point01 = 5;
            printf("You Have Earn %d Points\n", point01);
        }
        else{
            printf("Wrong answer: \n");
            point01 = 0;
            printf("You Have Earn  %d Points\n", point01);
        }

        printf ("(2) Which One in the first web browser in world? \n\n");
        printf("1) Internet Explorer\n");
        printf("2) Chrome\n");
        printf("3) FireFox\n");
        printf("4) Nexus\n");
        printf("enter your correct answer:- ");
        scanf("%d", &ans2);
        if (ans2 == 4)
        {
            printf("Correct answer: \n");
            point02 = 5;
            printf("You Have Earn %d Points\n", point02);
        }
        else{
            printf("Wrong answer: \n");
            point02 = 0;
            printf("You Have Earn  %d Points\n", point02);
        }

        printf ("(3) First Computer Virus is Known As? \n\n");
        printf("1) Rabbit\n");
        printf("2) Chepper Virus\n");
        printf("3) Elk Cloner\n");
        printf("4) SCA virus\n");
        printf("enter your correct answer:- ");
        scanf("%d", &ans3);
        if (ans3 == 2)
        {
            printf("Correct answer: \n");
            point03 = 5;
            printf("You Have Earn %d Points\n", point03);
        }
        else{
            printf("Wrong answer: \n");
            point03 = 0;
            printf("You Have Earn  %d Points\n", point03);
        }
        printf ("(4) Firewall in computer Used For? \n\n");
        printf("1) Security\n");
        printf("2) Data Transmittion\n");
        printf("3) Authentication\n");
        printf("4) Monitoring\n");
        printf("enter your correct answer:- ");
        scanf("%d", &ans4);
        if (ans4 == 1)
        {
            printf("Correct answer: \n");
            point04 = 5;
            printf("You Have Earn %d Points\n", point04);
        }
        else{
            printf("Wrong answer: \n");
            point04 = 0;
            printf("You Have Earn  %d Points\n", point04);
        }
        printf ("(5) Whice is not a Database Software? \n\n");
        printf("1) My Sql\n");
        printf("2) Oracle\n");
        printf("3) cobal\n");
        printf("4) laravel\n");
        printf("enter your correct answer:- ");
        scanf("%d", &ans5);
        if (ans5 == 3)
        {
            printf("Correct answer: \n");
            point05 = 5;
            printf("You Have Earn %d Points\n", point05);
        }
        else{
            printf("Wrong answer: \n");
            point05 = 0;
            printf("You Have Earn  %d Points\n", point05);
        }
        return 0;
    }
}