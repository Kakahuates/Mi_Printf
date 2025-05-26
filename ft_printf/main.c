#include "include/ft_printf.h" // Incluye tu cabecera principal

// Puedes incluir otras cabeceras si las necesitas para pruebas específicas,
// por ejemplo, para comparar con la printf original:
// #include <stdio.h> // Para la printf estándar

int main(void)
{
    int             ret_ft;
    char            my_char = 'X';
    char            *my_string = "Hello, ft_printf!";
    char            *null_string = NULL;
    int             my_int = 42;
    int             negative_int = -123;
    unsigned int    my_unsigned_int = 12345;
    unsigned int    my_hex = 255; // FF en hexadecimal
    void            *my_ptr = &my_int;

    // --- PRUEBAS BÁSICAS ---

    ft_printf("--- PRUEBAS BÁSICAS ---\n");

    ft_printf("String: %s\n", my_string);
    ft_printf("Char: %c\n", my_char);
    ft_printf("Decimal (positivo): %d\n", my_int);
    ft_printf("Decimal (negativo): %d\n", negative_int);
    ft_printf("Unsigned int: %u\n", my_unsigned_int);
    ft_printf("Hex (minúscula): %x\n", my_hex);
    ft_printf("Hex (mayúscula): %X\n", my_hex);
    ft_printf("Puntero: %p\n", my_ptr);
    ft_printf("Porcentaje: %%\n");
    ft_printf("String nulo: %s\n", null_string);

    ft_printf("\n--- PRUEBAS DE VALORES DE RETORNO ---\n");

    // Prueba con valores de retorno (cuántos caracteres se imprimieron)
    ret_ft = ft_printf("Este string tiene %d caracteres.\n", 30);
    ft_printf("ft_printf retornó: %d\n", ret_ft);

    // Puedes descomentar y usar esto para comparar con la printf original
    /*
    ret_std = printf("Este string tiene %d caracteres.\n", 30);
    printf("printf original retornó: %d\n", ret_std);
    */

    ft_printf("\n--- PRUEBAS ADICIONALES (si tu printf soporta flags, ancho, precisión) ---\n");

    // Ejemplos de pruebas adicionales si tu ft_printf soporta:
    // ft_printf("Ancho mínimo: %10d|\n", my_int);
    // ft_printf("Precisión string: %.5s\n", my_string);
    // ft_printf("Cero padding: %05d\n", my_int);
    // ft_printf("Signo: %+d\n", my_int);
    // ft_printf("Espacio: % d\n", my_int);
    // ft_printf("Hex con # : %#x\n", my_hex);
	ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

    ft_printf("\n--- FIN DE PRUEBAS ---\n");

    return (0);
}