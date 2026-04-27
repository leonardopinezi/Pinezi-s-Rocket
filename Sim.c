#include <stdio.h>
#include <math.h>

#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define WHITE   "\033[37m"

void FoguetePinezi(int estagios) {
    long double ESCAPE_VELOCITY = 11.185501704207922758142312L;
    long double acumulado = 0.0L;

    printf("\n" BOLD CYAN "  %-8s" RESET BOLD "  %-35s" RESET BOLD "  %-35s" RESET "\n", 
           "STAGE", "PINEZI'S INCREMENT (Δn)", "ESCAPE VELOCITY (V)");
    printf(CYAN "  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" RESET "\n");

    for(int n = 1; n <= estagios; n++) {
        long double incremento = 9.0L * powl(10.0L, -n);
        acumulado += incremento;
        long double velocidade = acumulado * ESCAPE_VELOCITY;

        printf("  " YELLOW "%-8d" RESET "  " WHITE "%35.30Lf" RESET "  " GREEN "%35.30Lfkm" RESET "\n", 
               n, incremento, velocidade);

        if (acumulado >= 1.0L) {
            printf(CYAN "  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" RESET "\n");
            printf(BOLD GREEN "DONE" RESET "\n\n");
            break;
        }
    }
}

int main() {
    FoguetePinezi(25);
    return 0;
}
