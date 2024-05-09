using System;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Olá, qual é o seu endereço?");
        string endereco = Console.ReadLine();

        // Usando um ciclo for para mostrar o endereço
        Console.WriteLine("Usando um ciclo for:");
        for (int i = 0; i < 1; i++) 
        {
            Console.WriteLine(endereco);
        }

        // Usando um ciclo foreach para mostrar o endereço
        Console.WriteLine("Usando um ciclo foreach:");
        foreach (var item in new string[] { endereco }) // Usando um array com um elemento para o foreach
        {
            Console.WriteLine(item);
        }
    }
}
