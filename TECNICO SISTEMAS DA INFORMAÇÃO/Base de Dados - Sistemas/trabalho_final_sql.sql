CREATE TABLE Cliente (
    id_cliente INT PRIMARY KEY,
    nome VARCHAR(255),
    email VARCHAR(255),
    telefone VARCHAR(15)
);

CREATE TABLE Produto (
    id_produto INT PRIMARY KEY,
    nome VARCHAR(255),
    preco DECIMAL(10, 2),
    quantidade_disponivel INT
);

CREATE TABLE Pedido (
    id_pedido INT PRIMARY KEY,
    data_pedido DATE,
    id_cliente INT,
    FOREIGN KEY (id_cliente) REFERENCES Cliente(id_cliente)
);

CREATE TABLE ItemPedido (
    id_item INT PRIMARY KEY,
    id_pedido INT,
    id_produto INT,
    quantidade INT,
    FOREIGN KEY (id_pedido) REFERENCES Pedido(id_pedido),
    FOREIGN KEY (id_produto) REFERENCES Produto(id_produto)
);

CREATE TABLE Pagamento (
    id_pagamento INT PRIMARY KEY,
    id_pedido INT,
    valor_total DECIMAL(10, 2),
    metodo_pagamento VARCHAR(50),
    FOREIGN KEY (id_pedido) REFERENCES Pedido(id_pedido)
);

INSERT INTO Cliente (id_cliente, nome, email, telefone) VALUES
(1, 'Ana Silva', 'ana.silva@email.com', '(11) 1234-5678'),
(2, 'Carlos Oliveira', 'carlos.oliveira@email.com', '(22) 9876-5432'),
(3, 'Maria Souza', 'maria.souza@email.com', '(33) 5555-1234'),
(4, 'José Pereira', 'jose.pereira@email.com', '(44) 8765-4321'),
(5, 'Amanda Santos', 'amanda.santos@email.com', '(55) 1111-9999'),
(6, 'Ricardo Lima', 'ricardo.lima@email.com', '(66) 2222-8888'),
(7, 'Fernanda Costa', 'fernanda.costa@email.com', '(77) 3333-7777'),
(8, 'Gabriel Martins', 'gabriel.martins@email.com', '(88) 4444-6666'),
(9, 'Juliana Oliveira', 'juliana.oliveira@email.com', '(99) 1212-3434'),
(10, 'Luiz Pereira', 'luiz.pereira@email.com', '(10) 5555-4321'),
(11, 'Camila Souza', 'camila.souza@email.com', '(11) 9876-5432'),
(12, 'Daniel Lima', 'daniel.lima@email.com', '(12) 5555-4321'),
(13, 'Mariana Costa', 'mariana.costa@email.com', '(13) 9876-5432'),
(14, 'Renato Oliveira', 'renato.oliveira@email.com', '(14) 5555-4321'),
(15, 'Patrícia Santos', 'patricia.santos@email.com', '(15) 9876-5432'),
(16, 'Vinícius Martins', 'vinicius.martins@email.com', '(16) 5555-4321'),
(17, 'Isabela Pereira', 'isabela.pereira@email.com', '(17) 9876-5432'),
(18, 'Lucas Souza', 'lucas.souza@email.com', '(18) 5555-4321'),
(19, 'Bianca Lima', 'bianca.lima@email.com', '(19) 9876-5432'),
(20, 'Eduardo Costa', 'eduardo.costa@email.com', '(20) 5555-4321');

INSERT INTO Produto (id_produto, nome, preco, quantidade_disponivel) VALUES
(1, 'Notebook HP', 2500.00, 10),
(2, 'Smartphone Samsung', 1200.00, 15),
(3, 'TV LED 50 polegadas', 1800.00, 5),
(4, 'Câmera Digital Canon', 800.00, 8),
(5, 'Impressora Epson', 300.00, 12),
(6, 'Fogão Electrolux', 1000.00, 7),
(7, 'Geladeira Brastemp', 2000.00, 9),
(8, 'Liquidificador Philips', 80.00, 20),
(9, 'Cadeira de Escritório', 150.00, 25),
(10, 'Mesa de Jantar', 500.00, 10),
(11, 'Tênis Nike Air Max', 200.00, 30),
(12, 'Mochila Dell', 60.00, 15),
(13, 'Livro: "A Arte da Guerra"', 25.00, 50),
(14, 'Bicicleta Mountain Bike', 400.00, 5),
(15, 'Headphone Sony', 100.00, 18),
(16, 'Máquina de Café Expresso', 150.00, 8),
(17, 'Tapete Decorativo', 40.00, 30),
(18, 'Relógio Casio', 70.00, 20),
(19, 'Panela Elétrica', 90.00, 12),
(20, 'Caixa de Som Bluetooth', 80.00, 15);

INSERT INTO Pedido (id_pedido, data_pedido, id_cliente) VALUES
(1, '2024-02-07', 1),
(2, '2024-02-07', 2),
(3, '2024-02-06', 3),
(4, '2024-02-06', 4),
(5, '2024-02-05', 5),
(6, '2024-02-05', 6),
(7, '2024-02-04', 7),
(8, '2024-02-04', 8),
(9, '2024-02-03', 9),
(10, '2024-02-03', 10),
(11, '2024-02-02', 11),
(12, '2024-02-02', 12),
(13, '2024-02-01', 13),
(14, '2024-02-01', 14),
(15, '2024-01-31', 15),
(16, '2024-01-31', 16),
(17, '2024-01-30', 17),
(18, '2024-01-30', 18),
(19, '2024-01-29', 19),
(20, '2024-01-29', 20);

INSERT INTO ItemPedido (id_item, id_pedido, id_produto, quantidade) VALUES
(1, 1, 1, 2),
(2, 1, 5, 1),
(3, 2, 3, 1),
(4, 2, 8, 3),
(5, 3, 2, 4),
(6, 3, 12, 2),
(7, 4, 7, 1),
(8, 4, 15, 2),
(9, 5, 10, 1),
(10, 5, 18, 1),
(11, 6, 11, 2),
(12, 6, 14, 1),
(13, 7, 6, 3),
(14, 7, 20, 1),
(15, 8, 9, 2),
(16, 8, 13, 3),
(17, 9, 4, 1),
(18, 9, 16, 2),
(19, 10, 17, 1),
(20, 10, 19, 2);

INSERT INTO Pagamento (id_pagamento, id_pedido, valor_total, metodo_pagamento) VALUES
(1, 1, 3500.00, 'Cartão de Crédito'),
(2, 2, 2400.00, 'Boleto Bancário'),
(3, 3, 2600.00, 'Cartão de Débito'),
(4, 4, 2800.00, 'MbWay'),
(5, 5, 1600.00, 'Transferência Bancária'),
(6, 6, 3000.00, 'Cartão de Crédito'),
(7, 7, 2200.00, 'Boleto Bancário'),
(8, 8, 1800.00, 'MbWay'),
(9, 9, 500.00, 'Transferência Bancária'),
(10, 10, 700.00, 'Cartão de Débito'),
(11, 11, 400.00, 'MbWay'),
(12, 12, 1100.00, 'Boleto Bancário'),
(13, 13, 750.00, 'Cartão de Crédito'),
(14, 14, 1200.00, 'Transferência Bancária'),
(15, 15, 900.00, 'MbWay'),
(16, 16, 500.00, 'Cartão de Débito'),
(17, 17, 650.00, 'Boleto Bancário'),
(18, 18, 800.00, 'Transferência Bancária'),
(19, 19, 950.00, 'Cartão de Crédito'),
(20, 20, 600.00, 'MbWay');

INSERT INTO Produto (id_produto, nome, preco, quantidade_disponivel) VALUES
(21, 'Smartwatch Xiaomi', 150.00, 8),
(22, 'Fone de Ouvido Bluetooth', 40.00, 25),
(23, 'Sofá Retrátil', 800.00, 5),
(24, 'Monitor Ultrawide 34 polegadas', 1000.00, 10),
(25, 'Teclado Mecânico Gamer', 120.00, 15);

/* 1 - Mostre todos os clientes e seus dados. */

select * from cliente;

/* 2 - Liste os produtos com o valor acima de 1000 reais */

SELECT nome, preco
FROM Produto
WHERE preco > 1000;

/* 3 - Liste os clientes que têm "Oliveira" em seus nomes. */

SELECT * FROM Cliente
WHERE nome LIKE '%Oliveira%';

/* 4 - Liste os pedidos feitos por clientes com o nome começando com "A". */

SELECT * FROM Pedido
WHERE id_cliente IN (SELECT id_cliente FROM Cliente WHERE nome LIKE 'A%');

/* 5 - Liste os produtos e suas quantidades disponíveis. */

SELECT nome, quantidade_disponivel
FROM Produto;

/* 6 - Liste os clientes que fizeram pagamentos com boleto bancário. */

SELECT c.*
FROM Cliente c
JOIN Pedido p ON c.id_cliente = p.id_cliente
JOIN Pagamento pg ON p.id_pedido = pg.id_pedido
WHERE pg.metodo_pagamento = 'Boleto Bancário';

/* 7 - Calcule o total de produtos vendidos agrupados por produto */

SELECT Produto.nome AS Produto, SUM(ItemPedido.quantidade) AS Total_Vendido
FROM Produto
JOIN ItemPedido ON Produto.id_produto = ItemPedido.id_produto
GROUP BY Produto.nome
Order by 1;

/* 8 - Calcule o total de vendas (valor total de pagamentos) para cada cliente*/

SELECT Cliente.nome AS Cliente, SUM(Pagamento.valor_total) AS Total_Vendas
FROM Cliente
JOIN Pedido ON Cliente.id_cliente = Pedido.id_cliente
JOIN Pagamento ON Pedido.id_pedido = Pagamento.id_pedido
GROUP BY Cliente.nome;

/* 9 - Encontre os produtos que não foram incluídos em nenhum pedido */

SELECT Produto.* FROM Produto
LEFT JOIN ItemPedido ON Produto.id_produto = ItemPedido.id_produto
WHERE ItemPedido.id_item IS NULL;

/* 10 - Encontre o produto mais caro na tabela Produto. */

SELECT *
FROM Produto
ORDER BY preco DESC
LIMIT 1;

/* 11 - Liste os produtos que foram pedidos exatamente 1 vezes. */

SELECT p.*
FROM Produto p
JOIN ItemPedido ip ON p.id_produto = ip.id_produto
GROUP BY p.id_produto
HAVING COUNT(ip.id_pedido) = 1;

/* 12 - Liste os produtos que foram pedidos junto com o produto de id 10 e que tiveram a mesma quantidade pedida. */
SELECT p.nome
FROM Produto p
JOIN ItemPedido ip1 ON p.id_produto = ip1.id_produto
JOIN ItemPedido ip2 ON ip1.id_pedido = ip2.id_pedido
WHERE ip2.id_produto = 10 AND ip1.quantidade = ip2.quantidade;