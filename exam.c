#include <stdio.h> 
#include <math.h>
int main () {
 
    printf( " HELLO WORLD " "\n") ;
    
    // VARIABLE 
    
   int age = 18 ;
   printf(" MY AGE IS %d" , age ) ;

    printf( "\n" "MY NAME IS HARSH ") ;
    
//    int age ; printf(" ENTER THE AGE : ") ;
//    scanf("%d" , &age) ;
//    printf ( " YOUR AGE IS : %d" , age ) ;

// SUM OF TWO NUMBERS 
    int num1 ; printf( " ENTER THE NUMBER 1 : ");
    scanf(" %d" , &num1) ;
        int num2 ; printf( " ENTER THE NUMBER 2 : ");
        scanf( " %d" , &num2) ;
        int sum = num1 + num2 ;
            printf( " YOUR SUM IS : %d" , sum) ;



    // FIND THE AREA OF SQUARE 
    float side ; printf( " ENTER THE SIZE OF SIDE OF A SQUARE : ") ;
    scanf( "%f" , &side ) ;
    float area1 = side*side ;
    printf( " AREA OF A SQUARE IS : %f " , area1) ;

    // FIND AREA OF CIRCLE 
    float radius ; printf( " \n ENTER THE RADIUS OF A CIRCLE : ") ;
    scanf( "%f" , &radius ) ;
    float area2 = radius*radius*3.1428 ;
    printf( " AREA OF A CIRCLE IS : %f " , area2) ;
            printf("\n") ;
 // random code :) 
            for ( int i = 1 ; i<=5 ; i++) {
                printf( " hello harsh \n") ;
            }
             
            int num1 ; printf( " \n ENTER THE NUMBER 1 : ") ;
            scanf("%d" , &num1) ;
            int num2 ; printf( " ENTER THE NUMBER 2 : ") ;
            scanf( "%d" , &num2) ;
            int power = pow( num1 , num2) ;                         // pow is mathematical tool use for power of two number in math.io directory
            printf(" YOUR ANSWER : %d " , power) ;



        // OPERATORS 
                 int num1 ; printf( " \n ENTER THE NUMBER 1 : ") ;
            scanf("%d" , &num1) ;
            int num2 ; printf( " ENTER THE NUMBER 2 : ") ;
            scanf( "%d" , &num2) ;
            if ( num1 > num2 && num1 + num2 == 10) {                     // && is an AND logical operator  // == , > are relational operators

                for (int i = 1 ; i <= 5 ; i+=1 ) {                        // i+=1 -: i = i+1 { it is an assignment operator }
                    printf( " HELLO EVERYONE \n") ;
                }
            } else if ( num1 > num2 || num1 + num2 == 10) {              // || is an OR logical operator    
                    for ( int i = 1 ; i <= 5 ; i++) {                   // == , > are relational operators
                        printf( " HB \n") ; 

                    }
            } else {
                for (int i = 5 ; i>=0 ; i--) {
                    printf( "GG \n") ;
                }
            }


            // IF-ELSE 

                char alph ; printf( " ENTER THE ALPHABET : ") ;
                scanf( "%c" , &alph ) ;

                // TO CHECK GIVEN ALPHABET IS AN VOWEL OR CONSONANTS 
                if ( alph == 'a' || alph =='e' ||alph == 'i' || alph =='o' || alph =='u'){
                    printf( " GIVEN ALPHABET IS A VOWEL IN LOWER CASE ") ;
                }
                else if ( alph == 'A' || alph =='E' || alph =='I' || alph =='O' ||alph == 'U') {
                    printf( " GIVEN ALPHABET IS A VOWEL IN UPPER CASE ");
                }
                else {
                   printf( " GIVEN ALPHABET IS A CONSONANT ") ;
                }

           
                //  TERNARY OPREATOR 

                 int num1 ; printf( " \n ENTER THE NUMBER 1 : ") ;
            scanf("%d" , &num1) ;
            int num2 ; printf( " ENTER THE NUMBER 2 : ") ;
            scanf( "%d" , &num2) ;
                num1 > num2 ? printf(" NUMBER 1 IS GREATER ") : printf( " NUMBER 2 IS GREATER ") ;                   // ternary opreator 
            // we can use ternary opreator instead of if-else if we have single statement but in this case when num1 = num2 then it will give wrong output so use this operator according your needs.



                //  SWITCH-CASE 
                    float num1 ; printf( " ENTER THE NUMBER 1 : ") ;
                        scanf(" %f" , &num1) ;

                    char operator ; printf(" enter the operator : ") ;
                        scanf( " %c" , &operator) ;

                        float num2 ; printf( " ENTER THE NUMBER 2 : ") ;
                            scanf( " %f" , &num2) ;

                            float num3 ;
                     switch(operator) {
                        case '+' :  num3 = num1 + num2 ;
                                    printf(" YOUR SUM IS : %f" , num3 ) ;
                                    break;

                        case '-' :  num3 = num1 - num2 ;
                                    printf(" YOUR DIFFERENCE IS : %f" , num3 ) ;
                                    break;

                        case '*' :  num3 = num1 * num2 ;
                                    printf(" YOUR MULTIPLICATION IS : %f" , num3 ) ;
                                    break;

                        case '/' :  num3 = num1 / num2 ;
                                    printf(" YOUR DEVISION IS : %f" , num3 ) ;
                                    break;

                        default :   printf ( "ENTER VALID SYNTAX") ;                                                           
                     }
                // we can use switch case if there are many conditions but it didnt read all cases if case 1 is true then all further cases gonna true 


      
        // FOR LOOP 

        // print sum of n natural number 
        int num ; printf( " enter the number : ") ;
            scanf("%d" , &num) ;                               // use of & is to addressing the value of num like a pointer 

            int sum = 0 ;
            for ( int i = 1 ; i <= num ; i++) {
                sum += i ;                                      // assigment opreator is used 

            }
            printf( " YOUR SUM IS : %d" , sum);



            // WHILE LOOP 

            // IDENTIFY GIVEN NUMBER IS PRIME OR NOT 

         int num ; printf( " enter the number : ") ;
            scanf("%d" , &num) ;     
            
            int i = 2 ; int prime = 0 ;
            while ( i < num - 1) {
                if ( num % i == 0) {
                    prime = 1 ;                    // use for not a prime 
                    break ;                         // for break the condition if atleast one condition is true 
                }
                    i++ ;                           // post increment 
            }
                if (prime == 1) {
                    printf(" IT IS NOT A PRIME NUMBER ");
                }
                else {
                    printf( " IT IS A PRIME NUMBER ") ;
                }


        // DO-WHILE LOOP 
        // FIND THE FACTORIAL OF A NUMBER 
        
         int num ; printf( " enter the number : ") ;
            scanf("%d" , &num) ;
                int mul =1 ;

            do {
                mul *= num ;
                num -= 1;

            } while( num > 0) ;
                printf(" your factorial is : %d" , mul) ;























}


