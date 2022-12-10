#include <stdio.h>

int userVote;

void opening(){
    printf("\n|***************************************|\n");
    printf("|__________ VOTING SYSTEM 1.0 __________|\n");
    printf("|_______________________________________|\n\n");
}

void presNumbers(){
    printf("|----------------------|\n");
    printf("| CANDIDATE\tNUMBER |\n");
    printf("|----------------------|\n");
    printf("| Candidate 1\t%6d |\n", 11);
    printf("| Candidate 2\t%6d |\n", 22);
    printf("| Candidate 3\t%6d |\n", 33);
    printf("|----------------------|\n");
}

void govNumbers(){
    printf("|----------------------|\n");
    printf("| CANDIDATE\tNUMBER |\n");
    printf("|----------------------|\n");
    printf("| Candidate 1\t%6d |\n", 10);
    printf("| Candidate 2\t%6d |\n", 20);
    printf("|----------------------|\n");
}

int vote1(){
    printf("\nType in the number of your president candidate:\n\n");
    scanf("%d", &userVote);
    switch (userVote)
    {
    case 11:
        printf("You voted for Candidate 1\n\n");
        break;
    case 22:
        printf("You voted for Candidate 2\n\n");
        break;
    case 33:
        printf("You voted for Candidate 3\n\n");
        break;    
    default:
        printf("You voted NULL\n\n");
        break;
    }
}

int main(){
    int presCandidate1, presCandidate2, presCandidate3, govCandidate1, govCandidate2;
    
    opening();
    
    presNumbers();    
    
    vote1();

    govNumbers();
    printf("\nType in the number of your governor candidate:\n\n");
    scanf("%d\n", &userVote);
    return 0;
}