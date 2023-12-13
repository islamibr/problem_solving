#include <stdio.h>
#include <string.h>

#define MAX_CITIES 110
#define CITY_SIZE 5

int cityCount, changesCount, resultIndex, indexA, indexB, indexC, minChanges;
char line[100], dataset[MAX_CITIES][CITY_SIZE];

// Function to find the city with the minimum number of recycling changes
int recycling() {
    resultIndex = 0;
    minChanges = 0xffffff;

    for (indexA = 0; indexA < cityCount; indexA++) {
        changesCount = 0;
        for (indexB = 0; indexB < cityCount; indexB++) {
            if (indexA == indexB) continue;
            for (indexC = 0; indexC < CITY_SIZE; indexC++) {
                if (dataset[indexA][indexC] != dataset[indexB][indexC])
                    changesCount++;
            }
        }

        if (changesCount < minChanges) {
            minChanges = changesCount;
            resultIndex = indexA;
        }
    }

    return resultIndex + 1;
}

int main() {
    cityCount = 0;
    int k, i;
    char c;

    while (fgets(line, 100, stdin)) {
        if (strcmp(line, "#\n") == 0)
            break;

        if (line[0] == 'e') {
            printf("%d\n", recycling());
            cityCount = 0;
        } else {
            for (k = 0; k < CITY_SIZE; k++) {
                c = line[k * 4];
                i = 0;

                switch (c) {
                    case 'r':
                        i = 0;
                        break;
                    case 'o':
                        i = 1;
                        break;
                    case 'y':
                        i = 2;
                        break;
                    case 'g':
                        i = 3;
                        break;
                    case 'b':
                        i = 4;
                        break;
                }

                dataset[cityCount][i] = line[k * 4 + 2];
            }
            cityCount++;
        }
    }

    return 0;
}
