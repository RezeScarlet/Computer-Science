// Author: Guilherme de Souza Dionisio Rosseti BV: 3032019 
// Data de Implementação: 21/06/2025 
function verificarAnoBissexto(ano) {
  if ((ano % 4 === 0 && ano % 100 !== 0) || ano % 400 === 0) {
    return "Ano Bissexto";
  } else {
    return "Não é Ano Bissexto";
  }
}
