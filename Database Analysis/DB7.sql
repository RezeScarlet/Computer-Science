SELECT 
    Cliente.Nome AS NomeCliente,
    SUM(Pedido.ValorTotal) AS ValorTotalPedidos
FROM Pedido, Cliente, Enderecos, Cidade
WHERE Pedido.fkCliente = Cliente.idCliente
  AND Cliente.idCliente = Enderecos.fkCliente
  AND Enderecos.fkCidade = Cidade.idCidade
  AND Cidade.SiglaEstado IN ('RS', 'SC', 'PR')
  AND Pedido.DataPedido >= DATE_SUB(CURDATE(), INTERVAL 2 YEAR)
GROUP BY Cliente.Nome
ORDER BY ValorTotalPedidos DESC;

SELECT 
    Produto.NomeProduto,
    SUM(PedidoItens.Quantidade) AS TotalVendidos
FROM PedidoItens, Produto, Pedido
WHERE PedidoItens.fkProduto = Produto.idProduto
  AND PedidoItens.fkPedido = Pedido.idPedido
  AND Pedido.DataPedido >= DATE_SUB(CURDATE(), INTERVAL 1 YEAR)
GROUP BY Produto.NomeProduto
ORDER BY TotalVendidos DESC
LIMIT 10;


SELECT 
    Cliente.Nome AS NomeCliente,
    'Janeiro' AS Mes,
    SUM(Pedido.ValorTotal) AS ValorTotalPedidos
FROM Pedido, Cliente
WHERE Pedido.fkCliente = Cliente.idCliente
  AND YEAR(Pedido.DataPedido) = 2021
  AND MONTH(Pedido.DataPedido) = 1
GROUP BY Cliente.Nome

UNION

SELECT 
    Cliente.Nome AS NomeCliente,
    'Fevereiro' AS Mes,
    SUM(Pedido.ValorTotal) AS ValorTotalPedidos
FROM Pedido, Cliente
WHERE Pedido.fkCliente = Cliente.idCliente
  AND YEAR(Pedido.DataPedido) = 2021
  AND MONTH(Pedido.DataPedido) = 2
GROUP BY Cliente.Nome

UNION

SELECT 
    Cliente.Nome AS NomeCliente,
    'Dezembro' AS Mes,
    SUM(Pedido.ValorTotal) AS ValorTotalPedidos
FROM Pedido, Cliente
WHERE Pedido.fkCliente = Cliente.idCliente
  AND YEAR(Pedido.DataPedido) = 2021
  AND MONTH(Pedido.DataPedido) = 12
GROUP BY Cliente.Nome

ORDER BY NomeCliente, Mes;
