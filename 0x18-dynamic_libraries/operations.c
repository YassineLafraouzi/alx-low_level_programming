// operations.c
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Gérer la division par zéro comme vous le souhaitez
    }
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        return 0; // Gérer la division par zéro comme vous le souhaitez
    }
}
