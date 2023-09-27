using System;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Olá, qual é o seu nome?");
        string nome = Console.ReadLine();

        Console.WriteLine("E o seu sobrenome?");
        string sobrenome = Console.ReadLine();

        Console.WriteLine("Qual é a sua idade?");
        int idade = int.Parse(Console.ReadLine());

        Console.WriteLine("Qual é o seu gênero (Masculino/Feminino/Outro)?");
        string genero = Console.ReadLine();

        // Deixa as primeiras letras do nome e sobrenome em maiúsculas
        nome = char.ToUpper(nome[0]) + nome.Substring(1);
        sobrenome = char.ToUpper(sobrenome[0]) + sobrenome.Substring(1);

        // Cumprimenta de acordo com o gênero
        if (genero.ToLower() == "masculino")
        {
            Console.WriteLine($"Olá, Sr. {nome} {sobrenome}!");
        }
        else if (genero.ToLower() == "feminino")
        {
            Console.WriteLine($"Olá, Sra. {nome} {sobrenome}!");
        }
        else
        {
            Console.WriteLine($"Olá, {nome} {sobrenome}!");
        }
    }
}
