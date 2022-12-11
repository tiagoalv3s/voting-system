#include <stdio.h>
#include <time.h>

int userVote;

void opening(){
    printf("\n|***************************************|\n");
    printf("|__________ VOTING SYSTEM 1.0 __________|\n");
    printf("|_______________________________________|\n");
}

// Show number of candidates
int numbers(int position){
    printf("\n\t|-----------------------|\n");
    printf("\t| CANDIDATE\t NUMBER |\n");
    printf("\t|-----------------------|\n");
    if (position == 0){
        printf("\t| Candidate 1\t %6d |\n", 11);
        printf("\t| Candidate 2\t %6d |\n", 22);
        printf("\t| Candidate 3\t %6d |\n", 33);
        printf("\t|-----------------------|\n");
    }else{
        printf("\t| Candidate 1\t %6d |\n", 10);
        printf("\t| Candidate 2\t %6d |\n", 20);
        printf("\t|-----------------------|\n");
    }    
}

// Initialize and confirm user vote for president.
int votePres(){
    char confirmation;
    do{
        printf("\nType in the number of your PRESIDENT candidate: ");
        scanf("%d", &userVote);
        switch (userVote)
        {
        case 11:
            printf("You voted for Candidate 1\n");
            break;
        case 22:
            printf("You voted for Candidate 2\n");
            break;
        case 33:
            printf("You voted for Candidate 3\n");
            break;    
        default:
            printf("You voted NULL\n");
            break;
        }
        printf("Do you confirm that?(Y/N): ");
        scanf(" %c", &confirmation);
    }while(confirmation == 'N' || confirmation == 'n');
}

// Initialize and confirm user vote for governor.
int voteGov(){
    char confirmation;
    do{
        printf("\nType in the number of your GOVERNOR candidate: ");
        scanf("%d", &userVote);
        switch (userVote)
        {
        case 10:
            printf("You voted for Candidate 1\n");
            break;
        case 20:
            printf("You voted for Candidate 2\n");
            break;  
        default:
            printf("You voted NULL\n");
            break;
        }
        printf("Do you confirm that?(Y/N): ");
        scanf(" %c", &confirmation);
    }while(confirmation == 'N' || confirmation == 'n');
}

// Store the vote as President or Governor with data and hour.
int storeVote(int position){ 
    time_t hour = time(NULL);
    char *stringHour = ctime(&hour);
    FILE *flpt;
    flpt = fopen("logVotes.txt", "a+");
    if (position == 0){
        fprintf(flpt, "President: %d\t\t%s\n", userVote, stringHour);
    }else{
        fprintf(flpt, "Governor: %d\t\t%s\n", userVote, stringHour); 
    }
    fclose(flpt);
}

int main(){    
    opening();
    
    numbers(0);    
    votePres();
    storeVote(0);

    numbers(1);
    voteGov();
    storeVote(1);

    printf("\n   ***** DONE! THANKS FOR VOTING! *****\n\n");
    
    return 0;
}