#include <stdio.h>
int main()
{
    int score=0;
    char name[20],age[3],ans[9],g[2],ws[2];
    printf("Enter your name(Without spaces on between): ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%s",age);
    printf("Enter your gender(m/f): ");
    scanf("%s",&g[0]);
    printf("\nGeneral instructions:\n1.This is an objective type quiz and u only need to type the option in SMALL CHARS.\n2.The result will be dispalyed at the end of the game.\n3.The quiz consists of 10 questions and there will bw no negative marking for wrong ans.\nPRESS C TO CONTINUE\n");
    scanf("%s",&ws[0]);
    
    printf("Q1.Where were the Olympics of 2016 held?\na.Beijing\nb.Rio\nc.Mexico\nd.Delhi\nAns:");
    
    scanf("%s",&ans[0]);
    
    if(ans[0]=='b')
    {
        score++;
    }
    printf("Q2.Which country did P.V.Sindhu, a badminton silver medal winner,represent?\na.France\nb.Russia\nc.China\nd.India\nAns:");
    scanf("%s",&ans[1]);
    
    if(ans[1]=='d')
    {
        score++;
    }
    printf("Q3.Which is the latest book written by Dan Brown?\na.Da Vinci Code\nb.Digital FOrtress\nc.Inferno\nd.None of These\nAns:");
    scanf("%s",&ans[2]);
    if(ans[2]=='c')
    {
        score++;
    }
    printf("Q4.In which state was the lost city of Dwaraka found in 2002\na.Gujarat\nb.A.P\nc.Maharashtra\nd.Kerala\nAns:");
    scanf("%s",&ans[3]);
    if(ans[3]=='a')
    {
        score++;
    }
    printf("Q5.How many times did Mohammed Ghori invade India?\na.12\nb.7\nc.17\nd.23\nAns:");
    scanf("%s",&ans[4]);
    if(ans[4]=='c')
    {
        score++;
    }
    printf("Q6.Who is the P.M of India?\na.Narendra Modi\nb.Quitubuddin Aibak\nc.Pranab Mukherjee\nd.Pratibha Patel\nAns:");
    scanf("%s",&ans[5]);
       if(ans[5]=='a')
    {
        score++;
    }
    printf("Q7.Where is the India gate located?\na.Mumbai\nb.Delhi\nc.Banglore\nd.Kolkata\nAns:");
    scanf("%s",&ans[6]);
    
    if(ans[6]=='b')
    {
        score++;
    }


    if(g[0]=='m')
    {
        printf("Congratulations Mr.%s!!Your score is %d out of 7\n",name,score);
    }
    if(g[0]=='f')
    {
        printf("Congratulations Ms.%s!!Your score is %d out of 7\n",name,score);
    }
    return 0;

    
}