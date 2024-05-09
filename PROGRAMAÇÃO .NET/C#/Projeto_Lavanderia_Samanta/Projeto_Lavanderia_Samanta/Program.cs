namespace ASCIIArt;

internal class Program
{
    private static void Main(string[] args)
    {
        string Logo = @"
       __                            _           _               __                 _                 
      / /  __ ___   ____ _ _ __   __| | ___ _ __(_) __ _        / _\ __ _ ___  __ _| |__   __ _  ___  
     / /  / _` \ \ / / _` | '_ \ / _` |/ _ \ '__| |/ _` |       \ \ / _` / __|/ _` | '_ \ / _` |/ _ \ 
    / /__| (_| |\ V / (_| | | | | (_| |  __/ |  | | (_| |       _\ \ (_| \__ \ (_| | |_) | (_| | (_) |
    \____/\__,_| \_/ \__,_|_| |_|\__,_|\___|_|  |_|\__,_|       \__/\__,_|___/\__,_|_.__/ \__,_|\___/ 
                                                                                            

";
        Console.WriteLine(Logo);
        Console.WriteLine("Bem-vindo a Lavanderia Sasabão! " +
            "\nEscolha sua maquina:" +
            "\nMaquina 1) Lavar 5 kg - 3.00 euros" +
            "\nMaquina 2) Lavar 5 kg - 3.00 euros" +
            "\nMaquina 3) Lavar 9 kg - 5.00 euros" +
            "\nMaquina 4) Lavar 9 kg - 5.00 euros" +
            "\nMaquina 5) Secar 9 kg - 1.00 euros" +
            "\nMaquina 6) Secar 9 kg - 1.00 euros" +
            " ");
        Console.WriteLine("R= ");
        string EscolhaMaquina = Console.ReadLine();
        switch (EscolhaMaquina)
        {
            case "1":
                Lavar5Kg();
                break;
            case "2":
                Lavar5Kg();
                break;
            case "3":
                Lavar9Kg();
                break;
            case "4":
                Lavar9Kg();
                break;
            case "5":
                Secar9Kg();
                break;
            case "6":
                Secar9Kg();
                break;
        }
    }

    static void Lavar5Kg()
    {
        Console.WriteLine("\n\n+--------------------------------+" +
            "\nMaquina de Lavar de 5 Kg escolhida" +
            "\nCertifique-se de que a Máquina já esteja pronta para funcionar!" +
            "\nValor a pagar = 3 euros. Insira o valor ");
        string moneyMachine = @"
    +------------------+
    |      MONEY       |
    |                  |
    |     $    $       |
    |     $    $       |
    |                  |
    |   [========]     |
    +------------------+";

        Console.WriteLine(moneyMachine);

        float ValorEntregue = 0;
        float ValorNecessario = 3;

        while (ValorEntregue < ValorNecessario)
        {
            string input = Console.ReadLine();
            float ValorInserido;

            if (float.TryParse(input, out ValorInserido) )
            {
                ValorEntregue += ValorInserido;
                if ( ValorEntregue < ValorNecessario )
                {
                    Console.WriteLine("\nValor insuficiente. Falta(m) " + (ValorNecessario - ValorEntregue) + " euro(s). Por favor, insira mais dinheiro");
                }
            }
            else
            {
                Console.WriteLine("\nPor favor, insira um valor válido.");
            }
        }

        if (ValorEntregue > ValorNecessario) 
        {
            Console.WriteLine("\nValor entregue = " + ValorEntregue);
            Console.WriteLine("Receba seu troco = " + (ValorEntregue - ValorNecessario));
            Console.WriteLine("A Máquina irá começar em breve, obrigado!");
        }
        else if (ValorEntregue == ValorNecessario)
        {
            Console.WriteLine("\nValor entregue = " + ValorEntregue);
            Console.WriteLine("Não há troco");
            Console.WriteLine("A Máquina irá começar em breve, obrigado!");
        }
        else
        {
            Console.WriteLine("\nPor favor, insira um valor válido.");
        }
        
    }

    static void Lavar9Kg()
    {
        Console.WriteLine("\n\n+--------------------------------+" +
            "\nMaquina de Lavar de 9 Kg escolhida" +
           "\nCertifique-se de que a Máquina já esteja pronta para funcionar!" +
           "\nValor a pagar = 5 euros. Insira o valor ");
        string moneyMachine = @"
    +------------------+
    |      MONEY       |
    |                  |
    |     $    $       |
    |     $    $       |
    |                  |
    |   [========]     |
    +------------------+";

        Console.WriteLine(moneyMachine);

        float ValorEntregue = 0;
        float ValorNecessario = 5;

        while (ValorEntregue < ValorNecessario)
        {
            string input = Console.ReadLine();
            float ValorInserido;

            if (float.TryParse(input, out ValorInserido))
            {
                ValorEntregue += ValorInserido;
                if (ValorEntregue < ValorNecessario)
                {
                    Console.WriteLine("\nValor insuficiente. Falta(m) " + (ValorNecessario - ValorEntregue) + " euro(s). Por favor, insira mais dinheiro");
                }
            }
            else
            {
                Console.WriteLine("\nPor favor, insira um valor válido.");
            }
        }

        if (ValorEntregue > ValorNecessario)
        {
            Console.WriteLine("\nValor entregue = " + ValorEntregue);
            Console.WriteLine("Receba seu troco = " + (ValorEntregue - ValorNecessario));
            Console.WriteLine("A Máquina irá começar em breve, obrigado!");
        }
        else if (ValorEntregue == ValorNecessario)
        {
            Console.WriteLine("\nValor entregue = " + ValorEntregue);
            Console.WriteLine("Não há troco");
            Console.WriteLine("A Máquina irá começar em breve, obrigado!");
        }
        else
        {
            Console.WriteLine("\nPor favor, insira um valor válido.");
        }

    }

    static void Secar9Kg()
    {
        Console.WriteLine("\n\n+--------------------------------+" +
            "\nMaquina de Secar de 9 Kg escolhida" +
           "\nCertifique-se de que a Máquina já esteja pronta para funcionar!" +
           "\nValor a pagar = 1 euro para cada ciclo de 15 minutos. Insira o valor ");
        string moneyMachine = @"
    +------------------+
    |      MONEY       |
    |                  |
    |     $    $       |
    |     $    $       |
    |                  |
    |   [========]     |
    +------------------+";

        Console.WriteLine(moneyMachine);

        float ValorEntregue = 0;
        float ValorNecessario = 1;

        while (ValorEntregue < ValorNecessario)
        {
            string input = Console.ReadLine();
            float ValorInserido;

            if (float.TryParse(input, out ValorInserido))
            {
                ValorEntregue += ValorInserido;
                if (ValorEntregue < ValorNecessario)
                {
                    Console.WriteLine("\nValor insuficiente. Falta(m) " + (ValorNecessario - ValorEntregue) + " euro(s). Por favor, insira mais dinheiro");
                }
            }
            else
            {
                Console.WriteLine("\nPor favor, insira um valor válido.");
            }
        }

        if (ValorEntregue > ValorNecessario)
        {
            Console.WriteLine("\nValor entregue = " + ValorEntregue);
            Console.WriteLine("Receba seu troco = " + (ValorEntregue - ValorNecessario));
            Console.WriteLine("A Máquina irá começar em breve, obrigado!");
        }
        else if (ValorEntregue == ValorNecessario)
        {
            Console.WriteLine("\nValor entregue = " + ValorEntregue);
            Console.WriteLine("Não há troco");
            Console.WriteLine("A Máquina irá começar em breve, obrigado!");
        }
        else
        {
            Console.WriteLine("\nPor favor, insira um valor válido.");
        }
    }
}
