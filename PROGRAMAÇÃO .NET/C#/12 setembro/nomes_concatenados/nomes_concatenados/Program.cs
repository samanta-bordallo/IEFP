// See https://aka.ms/new-console-template for more information

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Qual o seu primeiro nome? ");
        string firstname = Console.ReadLine();
        Console.WriteLine("Qual o seu segundo nome? ");
        string secondname = Console.ReadLine();

        Console.WriteLine("Olá, " + firstname + " " + secondname);

    }
}