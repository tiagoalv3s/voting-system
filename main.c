#include <stdio.h>

void opening(){
    printf("\n|***************************************|\n");
    printf("|__________ VOTING SYSTEM 1.0 __________|\n");
    printf("|_______________________________________|\n\n");
}

void presNumbers(){
    printf("| CANDIDATE\tNUMBER |\n");
    printf("|----------------------|\n");
    printf("| Candidate 1\t%6d |\n", 11);
    printf("| Candidate 2\t%6d |\n", 22);
    printf("| Candidate 3\t%6d |\n", 33);
}

int main(){
    int presCandidate1, presCandidate2, presCandidate3, govCandidate1, govCandidate2, userVote;
    
    opening();
    presNumbers();    

    printf("\nType in the number of your president candidate:\n");

    return 0;
}