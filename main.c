#include <stdio.h>

int userVote;

void opening(){
    printf("\n|***************************************|\n");
    printf("|__________ VOTING SYSTEM 1.0 __________|\n");
    printf("|_______________________________________|\n\n");
}

void presNumbers(){
    printf("\t|-----------------------|\n");
    printf("\t| CANDIDATE\t NUMBER |\n");
    printf("\t|-----------------------|\n");
    printf("\t| Candidate 1\t %6d |\n", 11);
    printf("\t| Candidate 2\t %6d |\n", 22);
    printf("\t| Candidate 3\t %6d |\n", 33);
    printf("\t|-----------------------|\n");
}

void govNumbers(){
    printf("\n\t|-----------------------|\n");
    printf("\t| CANDIDATE\t NUMBER |\n");
    printf("\t|-----------------------|\n");
    printf("\t| Candidate 1\t %6d |\n", 10);
    printf("\t| Candidate 2\t %6d |\n", 20);
    printf("\t|-----------------------|\n");
}

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

int storeVote(int position){ // Evaluates wether to store the vote as President or Governor.
    FILE *flpt;
    flpt = fopen("logVotes.txt", "a+");
    if (position == 0){
        fprintf(flpt, "President: %d\n", userVote);
    }else{
        fprintf(flpt, "Governor: %d\n", userVote); 
    }
    fclose(flpt);
}

int main(){
    int presCandidate1, presCandidate2, presCandidate3, govCandidate1, govCandidate2;
    
    opening();
    
    presNumbers();    
    votePres();
    storeVote(0);

    govNumbers();
    voteGov();
    storeVote(1);

    printf("Done! Thanks for voting!\n");
    
    return 0;
}