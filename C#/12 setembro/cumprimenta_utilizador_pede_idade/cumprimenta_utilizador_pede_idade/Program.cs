internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Qual o seu nome? ");
        string userName = Console.ReadLine();
        Console.WriteLine("Olá" +  userName);
        Console.WriteLine("Qual a sua idade?");
        int userIdade = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Sua idade é: " +  userIdade);

    }
}