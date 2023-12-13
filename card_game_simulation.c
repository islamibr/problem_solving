#include <stdio.h>
#include <string.h>

char putRank(char s) {
    switch(s) {
        case 10: return 'T';
        case 11: return 'J';
        case 12: return 'Q';
        case 13: return 'K';
        case 1: return 'A';
    }
    return s + '0';
}

int getRank(char s) {
    switch(s) {
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 1;
    }
    return s - '0';
}

char putSuit(char s) {
    if(s == 0) return 'C';
    if(s == 1) return 'D';
    if(s == 2) return 'H';
    if(s == 3) return 'S';
}

int getSuit(char s) {
    if(s == 'C') return 0;
    if(s == 'D') return 1;
    if(s == 'H') return 2;
    if(s == 'S') return 3;
}

int main() {
    char input[10];
    while(1) {
        int rank, suit, i;
        int pile[13][4], pileTop[13] = {};
        for(i = 51; i >= 0; i--) {
            scanf("%s", input);
            if(input[0] == '#') return 0;
            rank = getRank(input[0]);
            suit = getSuit(input[1]);
            pile[i % 13][pileTop[i % 13]++] = suit * 13 + rank;
        }
        for(i = 0; i < 13; i++) {
            rank = pile[i][0], pile[i][0] = pile[i][3], pile[i][3] = rank;
            rank = pile[i][1], pile[i][1] = pile[i][2], pile[i][2] = rank;
        }
        int index = 12, count = 0, last;
        while(pileTop[index] > 0) {
            int temp = (pile[index][pileTop[index] - 1] - 1) % 13;
            last = pile[index][pileTop[index] - 1];
            pileTop[index]--;
            index = temp;
            count++;
        }
        printf("%02d,%c%c\n", count, putRank((last - 1) % 13 + 1), putSuit((last - 1) / 13));
    }
    return 0;
}
