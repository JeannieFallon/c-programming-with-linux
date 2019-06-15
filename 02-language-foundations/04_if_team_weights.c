// You decide to bet on the final match of the Tug of War National Championship.

// Prior to the match the names and weights of the players are presented, 
// alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, 
// and so on). There is the same number of players on each side. You record 
// the player weights as they are presented and calculate a total weight for each time to inform your bet. You write a C program to assist with this.

// Your program should first read an integer indicating the number of members 
// per team. Then, the program should read the player weights (integers 
// representing kilograms) alternating by team. 

// After calculating the total weight of each team, the program should display 
// the text "Team X has an advantage" (replacing X with 1 or 2 depending on 
// which team has a greater total weight).

// You will then display the text "Total weight for team 1:" followed by the 
// weight of team 1, then "Total weight for team 2:" followed by the weight 
// of team 2 (see example below).

// You are guaranteed that the two teams will not have the same total weight.

#include <stdio.h>

int main(void) {
    int numPlayers, weight1, weight2;
    int sumTeam1 = 0;
    int sumTeam2 = 0;
    int advantage = 1;
    int i = 0;
    
    // input number of players on each team
    scanf("%d", &numPlayers);
    
    // input weights in pairs and sum for Team 1 and Team 2
    for (i=0; i < numPlayers; i++) {
        scanf("%d%d", &weight1, &weight2);
        sumTeam1 += weight1;
        sumTeam2 += weight2;
    }
    
    // advantage is initialized with default value for Team 1
    if (sumTeam2 > sumTeam1) {
        advantage = 2;
    }
    
    // output advantageous team & total weight of each team
    printf("Team %d has an advantage\n", advantage);
    printf("Total weight for team 1: %d\n", sumTeam1);
    printf("Total weight for team 2: %d\n", sumTeam2);
    
    return 0;
}