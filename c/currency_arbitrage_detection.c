#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_N 22

int n, path[MAX_N][MAX_N][MAX_N], temp;
double d[MAX_N][MAX_N][MAX_N], x;
int stack[MAX_N], top;

// Function to implement the Floyd-Warshall algorithm
void floyd() {
    // Iterate through all possible path lengths
    for (int l = 1; l < n; l++) {
        // Iterate through all nodes as intermediate nodes
        for (int k = 0; k < n; k++) {
            // Iterate through all pairs of nodes
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    // Calculate the product of the exchange rates
                    x = d[i][k][l - 1] * d[k][j][0];
                    // Update the exchange rate and path if a better rate is found
                    if (d[i][j][l] < x) {
                        d[i][j][l] = x;
                        path[i][j][l] = k; // Update the intermediate node
                    }
                }
            }
        }
    }

    // Find the arbitrage sequence
    int found_arbitrage = 0;
    for (int l = 1; l < n && !found_arbitrage; l++) {
        for (int i = 0; i < n; i++) {
            if (d[i][i][l] > 1.01) {
                top = 0;
                stack[top++] = path[i][i][l];
                for (int j = l - 1; j > -1; j--) {
                    stack[top++] = path[i][stack[top - 1]][j];
                }
                temp = stack[top - 1];
                while (top > 0) {
                    printf("%d ", stack[--top] + 1);
                }
                printf("%d", temp + 1);
                found_arbitrage = 1;
                break;
            }
        }
    }

    if (!found_arbitrage) {
        printf("No arbitrage sequence exists");
    }

    printf("\n");
}

int main() {
    while (scanf("%d", &n) == 1) {
        memset(d, 0, sizeof(d));
        memset(path, 0, sizeof(path));

        // Read the exchange rates
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                scanf("%lf", &d[i][j][0]);
                path[i][j][0] = i;
            }

            d[i][i][0] = 1.0;
            path[i][i][0] = i;

            for (int j = i + 1; j < n; j++) {
                scanf("%lf", &d[i][j][0]);
                path[i][j][0] = i;
            }
        }

        // Run the Floyd-Warshall algorithm
        floyd();
    }

    return 0;
}
