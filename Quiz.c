#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("=========================================\n");
printf("Quick Quiz Challenge On Earth's Knowledge\n");
printf("=========================================\n");
int choice,score=0;
char *questions[5]={
"What is the Latin name for Earth often used in science and science fiction? ",
"What is Earth's systemic astronomical designation based on its host star?",
"Which Old English word meaning ground or soil evolved into the modern word Earth ?",
"Who is the Greek mythological counterpart to the Roman Earth goddess Terra?",
"Earth is the only planet in our solar system NOT named after what?"
};
char *options[5][4]={
{"1.Sol","2.Terra","3.Ares","4.Luna"},
{"1.Sol I","2.Alpha III","3.Sol III","4.Vega IV"},
{"1.Eorthe","2.Gaia","3.Tellus","4.Mundus"},
{"1.Hera","2.Demeter","3.Athena","4.gaia"},
{"1.A Star","2.A famous astronomer","3.A Greek or Roman deity","4.A constellation"}
};
int answer[5]={2,3,1,4,3};
for(int i=0;i<5;i++)
{
printf("\nQ%d.%s\n",i+1,questions[i]);
for(int j=0;j<4;j++)
{
printf("%s\n",options[i][j]);
}

printf("Your Answer:");
if(scanf("%d",&choice)!=1 || choice>4 || choice<1)
{
printf("choice from 1-4\n");
while(getchar()!= '\n');
i--;
continue;
}
else
{

if(choice==answer[i])
{
printf("Correct!\n");
score++;
}
else
{
printf("Wrong. Answer:%d\n",answer[i]);
}
}
}
printf("\nYour Score:%d\n",score);
return 0;
}
