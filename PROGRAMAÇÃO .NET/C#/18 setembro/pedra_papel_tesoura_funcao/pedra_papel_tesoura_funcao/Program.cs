using System;

internal class Program
{
    private static void Main(string[] args)
    {
        int comp, jog;
        Random random = new Random();

        comp = random.Next(1, 4);
        Console.WriteLine("Escolha um valor (1 - Pedra, 2 - Papel, 3 - Tesoura): ");
        jog = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("-------");
        Console.WriteLine("Computador: " + comp);
        Console.WriteLine("Jogador: " + jog);
        Console.WriteLine("-------");

        CompararEscolhas(comp, jog);
    }

    // Função para comparar as escolhas
    private static void CompararEscolhas(int escolhaComputador, int escolhaJogador)
    {
        if (escolhaComputador == escolhaJogador)
        {
            Console.WriteLine("Empatado");
        }
        else if ((escolhaComputador == 1 && escolhaJogador == 3) ||
                 (escolhaComputador == 2 && escolhaJogador == 1) ||
                 (escolhaComputador == 3 && escolhaJogador == 2))
        {
            Console.WriteLine("Ganhou o computador");
        }
        else
        {
            Console.WriteLine("Ganhou o jogador");
        }
    }
}
