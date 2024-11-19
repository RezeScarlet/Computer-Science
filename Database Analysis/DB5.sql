============= 1 ============= 
SELECT CNPJ_CPF, RazaoSocial, fkCodAtuacao, CodSetor 
FROM Entidade, Atuacao, Setor
WHERE fkCodAtuacao = CodAtuacao AND fkCodSetor = CodSetor
ORDER BY NomeSetor, NomeAtuacao, NomeFantasia;

SELECT CNPJ_CPF, RazaoSocial, fkCodAtuacao, CodSetor 
FROM Entidade
INNER JOIN Atuacao ON fkCodAtuacao = CodAtuacao
INNER JOIN Setor ON fkCodSetor = CodSetor
ORDER BY NomeSetor, NomeAtuacao, NomeFantasia;

============= 2 ============= 
SELECT Evento.*,Logradouro, Numero, Complemento, Bairro, CEP, NomeCidade, NomeUF  
FROM Evento, LocalEvento, Cidade, Estado
WHERE fkCodLocal = CodLocal AND fkCodCidade = CodCidade AND fkSiglaUF = SiglaUF;

SELECT Evento.*,Logradouro, Numero, Complemento, Bairro, CEP, NomeCidade, NomeUF  
FROM Evento
INNER JOIN LocalEvento ON fkCodLocal = CodLocal
INNER JOIN Cidade ON fkCodCidade = CodCidade
INNER JOIN Estado ON fkSiglaUF = SiglaUF;

============= 3 ============= 
SELECT RazaoSocial, NomeContato, Usuario, Telefone
FROM Entidade
INNER JOIN Colaborador ON Colaborador.fkCNPJ_CPF = CNPJ_CPF
INNER JOIN RedesSociaisColaborador ON fkCodContato = CodContato
INNER JOIN TelefonesEntidade ON TelefonesEntidade.fkCNPJ_CPF = CNPJ_CPF
ORDER BY RazaoSocial, NomeContato;

============= 4 ============= 
SELECT NomeContato, NomeInteresse
FROM Colaborador
INNER JOIN InteressesContato ON fkCodContato  = CodContato
INNER JOIN Interesse ON fkCodInteresse = CodInteresse
ORDER BY CodContato, NomeInteresse;
