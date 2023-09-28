using System;

class LojaTroco
{
    public void Calcula_troco()
    {
        while (vcompra > acum)
        {
            Console.WriteLine("Falta " + (vcompra - acum));
            Console.WriteLine("Entregue mais dinheiro:");
            double valorEntregue = Convert.ToDouble(Console.ReadLine());
            acum += valorEntregue;
        }

        if (vcompra == acum)
        {
            Console.WriteLine("Não há troco");
        }
        else
        {
            troco = acum - vcompra;
            Console.WriteLine("Troco = " + troco);
        }
    }

    public double vcompra { get; set; }
    public double acum { get; set; }
    public double troco { get; set; }
}

internal class Program
{
    private static void Main(string[] args)
    {
        LojaTroco loja = new LojaTroco();

        Console.WriteLine("Digite o valor da compra:");
        loja.vcompra = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Digite o valor entregue:");
        loja.acum = Convert.ToDouble(Console.ReadLine());

        loja.Calcula_troco();
    }
}
