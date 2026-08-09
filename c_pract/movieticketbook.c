#include<stdio.h>

void main()
{
    int movchoice, movlang, mov_time, movclasschoice;
    printf("Welcome to Movie Ticket Booking System\n    ");
    movie:
    printf("\n1-----Spider Man");
    printf("\n2-----Ramayana");
    printf("\n3-----Dhurandhar");
    printf("\nEnter the choice of movie: ");
    scanf("%d",&movchoice);   

    switch(movchoice)
    {

        /* 
        
            spider man start

        */ 
        case 1: printf("You have selected Spider Man"); 
                printf("\nSelect movie language"); 
                printf("\n1-----English");
                printf("\n2-----Hindi");
                printf("\nEntre the choice of language: ");
                scanf("%d",&movlang);

                switch(movlang)
                {
                    case 1: printf("Language: English");
                            printf("\nShow Timings: 10:00 AM, 1:00 PM, 4:00 PM, 7:00 PM");
                            printf("\nEnter the time (only in hour): ");
                            scanf("%d", &mov_time);

                            switch(mov_time)
                            {
                                case 10: printf("You have selected 10:00 AM");
                                         printf("\n1----Gold Class");
                                         printf("\n2----Silver Class");
                                         printf("\n3----Club Class");
                                         printf("\nEnter the choice of class: ");
                                         scanf("%d", &movclasschoice);

                                         switch(movclasschoice)
                                         {
                                            case 1: printf("You have selected Gold Class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Silver Class");
                                                    printf("\nTicket Price: 300");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Club Class");
                                                    printf("\nTicket Price: 200");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                         }//movder man class choice switch end
                                         break;
                                case 1: printf("You have selected 1:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                        }//movder man class choice switch end
                                        break;
                                case 4: printf("You have selected 4:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                        }//movder man class choice switch end
                                        break;
                                case 7: printf("You have selected 7:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                        }//movder man class choice switch end
                                        break;
                            }//show timing switch end
                            break;
                    case 2: printf("Language: Hindi");
                            printf("\nShow Timings: 11:00 AM, 2:00 PM, 5:00 PM, 8:00 PM");
                            printf("\nEnter the time (only in hour): ");
                            scanf("%d", &mov_time);

                            switch(mov_time)
                            {
                                case 11:printf("You have selected 11:00 AM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                        }//movder man class choice switch end
                                        break;
                                case 2: printf("You have selected 2:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d",&movclasschoice);

                                        switch(movclasschoice)
                                        {
                                            case 1: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                        }//movder man class choice switch end
                                case 5: printf("You have selected 5:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d",&movclasschoice);

                                        switch(movclasschoice)
                                        {
                                            case 1: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                        }//movder man class choice switch end
                                case 8: printf("You have selected 8:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d",&movclasschoice);

                                        switch(movclasschoice)
                                        {
                                            case 1: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                        }//movder man class choice switch end   
                            }// show timing switch end 
                           break;
                }//movder man language switch end
                break;
        /* 
        
            movder man end

        */
        
        
        /*
        
            Ramayana start        

        */
        case 2: printf("You have selected Ramayana");
                printf("\nSelect movie language");  
                printf("\n1-----English");
                printf("\n2-----Hindi");
                printf("\nEntre the choice of language: ");
                scanf("%d",&movlang);

                switch(movlang)
                {
                    case 1: printf("Language: English");
                            printf("\nShow Timings: 10:00 AM, 4:00 PM");
                            printf("\nEnter the time (only in hour): ");
                            scanf("%d", &mov_time);

                            switch(mov_time)
                            {
                                case 10: printf("You have selected 10:00 AM");
                                         printf("\n1----Gold Class");
                                         printf("\n2----Silver Class");
                                         printf("\n3----Club Class");
                                         printf("\nEnter the choice of class: ");
                                         scanf("%d", &movclasschoice);

                                         switch(movclasschoice)
                                         {
                                            case 1: printf("You have selected Gold Class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Silver Class");
                                                    printf("\nTicket Price: 300");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Club Class");
                                                    printf("\nTicket Price: 200");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                         }//ramayana class choice switch end
                                         break;
                                case 4: printf("You have selected 4:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                        }//ramayana class choice switch end
                                        break;
                            }//show timing switch end
                            break;
                    case 2: printf("Language: Hindi");
                            printf("\nShow Timings: 11:00 AM, 5:00 PM");
                            printf("\nEnter the time (only in hour): ");
                            scanf("%d", &mov_time);

                            switch(mov_time)
                            {
                                case 11:printf("You have selected 11:00 AM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                        }//ramayana class choice switch end
                                        break;
                                case 5: printf("You have selected 5:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d",&movclasschoice);

                                        switch(movclasschoice)
                                        {
                                            case 1: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Silver class");
                                                    printf("\nTicket Price: 300");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Club class");
                                                    printf("\nTicket Price: 200");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                        }//ramayana class choice switch end  
                            }// show timing switch end 
                           break;
                }//ramayana man language switch end 
                break;

        /*
        
                Ramayana end
        
        */


         /*
        
                Dhurandhar start
        
        */
        case 3: printf("You have selected Dhurandhar");
                printf("\nSelect movie language");  
                printf("\n1-----English");
                printf("\n2-----Hindi");
                printf("\nEntre the choice of language: ");
                scanf("%d",&movlang);

                switch(movlang)
                {
                    case 1: printf("Language: English");
                            printf("\nShow Timings: 10:00 AM, 4:00 PM");
                            printf("\nEnter the time (only in hour): ");
                            scanf("%d", &mov_time);

                            switch(mov_time)
                            {
                                case 10: printf("You have selected 10:00 AM");
                                         printf("\n1----Gold Class");
                                         printf("\n2----Silver Class");
                                         printf("\n3----Club Class");
                                         printf("\nEnter the choice of class: ");
                                         scanf("%d", &movclasschoice);

                                         switch(movclasschoice)
                                         {
                                            case 1: printf("You have selected Gold Class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Silver Class");
                                                    printf("\nTicket Price: 300");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Club Class");
                                                    printf("\nTicket Price: 200");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            default: printf("\nEnter the valid class from the given options...");
                                         }//dhurandhar class choice switch end
                                         break;
                                case 4: printf("You have selected 4:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           default: printf("\nEnter the valid class from the given options...");
                                        }//dhurandhar class choice switch end
                                        break;
                            }//show timing switch end
                            break;
                    case 2: mov_time2:
                            printf("Language: Hindi");
                            printf("\nShow Timings: 11:00 AM, 5:00 PM");
                            printf("\nEnter the time (only in hour): ");
                            scanf("%d", &mov_time);

                            switch(mov_time)
                            {
                                case 11:printf("You have selected 11:00 AM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d", &movclasschoice);

                                        switch(movclasschoice)
                                        {
                                           case 1: printf("You have selected Gold Class");
                                                   printf("\nTicket Price: 500");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 2: printf("You have selected Silver Class");
                                                   printf("\nTicket Price: 300");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                           case 3: printf("You have selected Club Class");
                                                   printf("\nTicket Price: 200");
                                                   printf("\nEnjoy the movie...");
                                                   break;
                                        }//dhurandhar class choice switch end
                                        break;
                                case 5: printf("You have selected 5:00 PM");
                                        printf("\n1----Gold Class");
                                        printf("\n2----Silver Class");
                                        printf("\n3----Club Class");
                                        printf("\nEnter the choice of class: ");
                                        scanf("%d",&movclasschoice);

                                        switch(movclasschoice)
                                        {
                                            case 1: printf("You have selected Gold class");
                                                    printf("\nTicket Price: 500");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 2: printf("You have selected Silver class");
                                                    printf("\nTicket Price: 300");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                            case 3: printf("You have selected Club class");
                                                    printf("\nTicket Price: 200");
                                                    printf("\nEnjoy the movie...");
                                                    break;
                                        }//dhurandhar class choice switch end  
                            }// show timing switch end 
                           break;
                }//dhurandhar man language switch end 
                break;   
                
         /*
        
                Dhurandhar end
        
        */
        default: printf("\nEnter the valid choice form 1-5...");
        goto movie;
    }//movie choice switch end
}// main end