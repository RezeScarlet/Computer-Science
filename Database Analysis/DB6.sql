SELECT MAX(Populacao) FROM Cidade;

SELECT MIN(Populacao) FROM Cidade;

SELECT fkSiglaUF, AVG(Populacao) AS 'MEDIA' FROM Cidade WHERE fkSiglaUF in ('SP', 'RJ', 'ES', 'MG') GROUP BY fkSiglaUF ORDER BY 'MEDIA';

SELECT COUNT(NomeCidade) FROM Cidade;

SELECT COUNT(NomeCidade) FROM Cidade WHERE fkSiglaUF = 'SP';

SELECT COUNT(NomeCidade) FROM Cidade WHERE Populacao < 10000;

SELECT SUM(Populacao) FROM Cidade WHERE fkSiglaUF in ('PR', 'SC', 'RS');
