using System;
class Pessoa
{
    public string Nome { get; set; }
    public double Altura { get; set; }
    public double Peso { get; set; }

    public Pessoa(string nome, double altura, double peso)
    {
        Nome = nome;
        Altura = altura;
        Peso = peso;
    }
    public void MostrarInformacoes()
    {
        Console.WriteLine($"Nome: {Nome}");
        Console.WriteLine($"Altura: {Altura} cm");
        Console.WriteLine($"Peso: {Peso} kg");
    }
}
class Program
{
    static void Main(string[] args)
    {
        Pessoa pessoa1 = new Pessoa("Gaby", 155, 45);
        pessoa1.MostrarInformacoes();

        Pessoa pessoa2 = new Pessoa("Eva", 166, 50);
        pessoa2.MostrarInformacoes();
    }
}