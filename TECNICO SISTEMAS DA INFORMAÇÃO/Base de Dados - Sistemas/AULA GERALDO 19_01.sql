/*1. Mostrar todos os valores da tabela purchase_orders, em que o campo notes não são nulos.*/

SELECT * FROM purchase_orders
WHERE notes IS NOT NULL;

/*2. mostrar todos os registros de porchase_orders que tem o supplier_id igual a 3 e status_id igual a 2*/

SELECT * FROM purchase_orders
WHERE supplier_id = 3 and status_id = 2;

/* 3. Devolver o campo id da tabela supplier com o nome do purchase-orders_id e mostrar o campo campany da tabela supplier na mesma query */

SELECT suppliers.id AS purchase_orders_id, suppliers.company
FROM suppliers
JOIN purchase_orders ON suppliers.id = purchase_orders.supplier_id;

/* 4. Utilizando a query feita no terceiro exercício, acrescentem ao retorno da query: o nome do estado (tabela orders_status), e o nome precisa de estar totalmente em maísculo. */

SELECT suppliers.id AS purchase_orders_id, suppliers.company, UPPER (orders_status.status_name)
FROM suppliers
JOIN purchase_orders ON suppliers.id = purchase_orders.supplier_id
JOIN orders_status ON purchase_orders.status_id = orders_status.id;

/* 5.  Selecionar a tabela PURCHASE_ORDER_DETAILS,  utilizando a relação com a tabela PURCHASE_ORDERS,
mostrar o nome do supplier, e o nome do produto que foi encomendado. */

SELECT purchase_order_details, purchase_orders
FROM purchase_order_details