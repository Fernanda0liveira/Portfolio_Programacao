
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, pi;
    scanf("%lf %lf %lf", &A, &B, &C);

    pi = 3.14159;
    TRIANGULO = (A * C)/2;
    CIRCULO = C * C * pi;
    TRAPEZIO = ((A + B) * C)/2;
    QUADRADO = B * B;
    RETANGULO = A * B;
    
    printf("TRIANGULO = %.3lf\n", TRIANGULO);
    printf("CIRCULO = %.3lf\n", CIRCULO);
    printf("TRAPEZIO = %.3lf\n", TRAPEZIO);
    printf("QUADRADO = %.3lf\n", QUADRADO);
    printf("RETANGULO = %.3lf\n", RETANGULO);

    
}
