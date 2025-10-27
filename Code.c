#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int keyboard_masked = 0;
int mouse_masked = 0;
int printer_masked = 0;

void handle_keyboard() {
    printf("Keyboard Interrupt Triggered → Handling ISR → Completed\n");
}

void handle_mouse() {
    printf("Mouse Interrupt Triggered → Handling ISR → Completed\n");
}

void handle_printer() {
    printf("Printer Interrupt Triggered → Handling ISR → Completed\n");
}

int main() {
    srand(time(0));
    int choice;

    printf("=== Interrupt Controller Simulation ===\n");
    printf("Priority: Keyboard > Mouse > Printer\n");

    while (1) {
        printf("\n1. Mask/Unmask Devices\n2. Generate Random Interrupt\n3. Exit\nChoose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter mask status (1=Mask, 0=Unmask):\n");
            printf("Keyboard: "); scanf("%d", &keyboard_masked);
            printf("Mouse: "); scanf("%d", &mouse_masked);
            printf("Printer: "); scanf("%d", &printer_masked);
        }

        else if (choice == 2) {
            int interrupt = rand() % 3; // 0=Keyboard, 1=Mouse, 2=Printer
            printf("\n");
            sleep(1); // simulate delay

            // Priority handling (Keyboard > Mouse > Printer)
            if (!keyboard_masked)
                handle_keyboard();
            else if (!mouse_masked)
                handle_mouse();
            else if (!printer_masked)
                handle_printer();
            else
                printf("All devices masked → No interrupt handled\n");
        }

        else if (choice == 3) {
            printf("Exiting simulation...\n");
            break;
        }

        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
