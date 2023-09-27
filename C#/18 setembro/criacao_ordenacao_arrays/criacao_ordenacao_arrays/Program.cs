using System;

internal class Program
{
    private static void Main(string[] args)
    {
        // Crie um array de strings com 4 elementos
        string[] meuArray = new string[4];

        // Usando um ciclo for para preencher o array
        for (int i = 0; i < meuArray.Length; i++)
        {
            Console.WriteLine($"Insira o elemento {i + 1}: ");
            meuArray[i] = Console.ReadLine();
        }

        // Ordene o array
        Array.Sort(meuArray);

        // Usando um ciclo foreach para mostrar o conteúdo do array ordenado
        Console.WriteLine("Conteúdo do array ordenado:");
        foreach (string elemento in meuArray)
        {
            Console.WriteLine(elemento);
        }
    }
}
