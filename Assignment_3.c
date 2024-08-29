#include <stdio.h>

int main() 
{
    
    // 1 ...

    // int age ;

    // printf("Enter your age\n");
    // scanf("%d",&age);

    // if( age <= 18)
    // {
    //     printf("Your are eligible for giving vote");
    // }
    // else{
    //     printf("Your are not eligible for giving vote");
    // }
    // return 0;



    // 2 , 10...

    // int num;

    // printf("Enter the number you want to check positive or negative\n");
    // scanf("%d",&num);

    // if(num == 0){
    //     printf("Entered number is 0");
    // }

    // else if(num > 0){
    //     printf("Entered number is positive");
    // }

    // else{
    //     printf("Entered number is negative");
    // }



    // 3...

    // int num ;

    // printf("Enter the number\n");
    // scanf("%d",&num);

    // if(num % 10 == 0){
    //     printf("Entered nummber was multiple of 10");
    // }

    // else{
    //     printf("Entered nummber was not multiple of 10");
    // }



    // 4...

    // int a,b,c ;

    // printf("Enter three number\n");
    // scanf("%d %d %d",&a,&b,&c);

    // if(a > b  && a > c)
    // {
    //     printf("a is largest");
    // }

    // else if(b > a  && b > c)
    // {
    //     printf("b is largest");
    // }

    // else{
    //     printf("c is largest");
    // }
     
    // return 0 ;



    // 5...
  
    // char value;
    // printf("Enter the character you want to chacke vowel or consonent :");
    // scanf("%c",&value);

    // if (value == 'a' || value == 'e' ||value == 'i'||value == 'o'||value == 'u'||value == 'A'||value == 'E'||value == 'I'||value == 'O'  || value == 'U')
    // {
    //     printf("Entered character was vowel");
    // }
    // else{
    //     printf("Entered character was consonent");

    // }
    
    // return 0;

    


    // 6...

    // int a;

    // printf("Enter the number....");
    // scanf("%d", &a);

    // if (a % 2 == 0)
    // {
        
    //     printf("This number is odd\n");
    // }
    // else
    // {
    //     printf("This number is even\n");
    // }

    // return 0;                




    // 7,8 ...                                   *** nice one ***

    // char ch;

    // printf("Enter the character\n");
    // scanf("%c",&ch);
    
    // if(ch >= 97  && ch <= 122)
    // {
    //     printf("character is lowercase");
    // }

    // else if(ch >= 65 && ch <= 90)
    // {
    //     printf("character is upercase");
    // }

    // else if((ch >= 32 && ch <= 42)  || (ch >= 58 && ch <= 64) || (ch >=91 && ch<= 96) || (ch >= 123 && ch <= 126) )
    // {
    //     printf("character is special character");
    // }

    // else {
    //     printf("character is digit");
    // }
    
    // return 0;


                                        //  or


    // char a;
    // printf("Enter a char: ");
    // scanf("%c",&a);

    // if(a >= 'a' && a <= 'z')
    // {
    //     printf("char is lower case");
    // }
    // else if(a >= 'A' && a <= 'Z')
    // {
    //     printf("char is upper case");
    // }
    // else if(a >= '0' && a <= '9')
    // {
    //     printf("char is number");
    // }
    // else{
    //     printf("char is special");
    //  }




    // 9...

    // int marks;

    // printf("Enter your marks :");
    // scanf("%d",&marks);

    // if( marks >= 90)
    // {
    //     printf("Grade A");
    // }

    // else if(marks >= 80 && marks < 90)
    // {
    //     printf("Grade B");
    // }

    // else if(marks >=70 && marks < 80)
    // {
    //     printf("Grade C");
    // }

    // else if(marks >= 60 && marks < 70)
    // {
    //     printf("Grade D");
    // }

    // else{
    //     printf("Grade E");
    // }



    // 11...


    int temperature ;

    printf("Enter the temperature of your rome :");
    scanf("%d",&temperature);

    if(temperature > 30)
    {
        printf("It's hot, stay hydrated");
    }
    
    else if(temperature >= 15 && temperature <= 30)
    {
        printf("The weather is plesant");
    }
    
    else if(temperature < 15)
    {
        printf("it's cold, wear warm clothes");
    }

}