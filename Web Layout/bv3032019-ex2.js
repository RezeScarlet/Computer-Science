// Author: Guilherme de Souza Dionisio Rosseti BV: 3032019 
// Data de Implementação: 21/06/2025 
function obterDataFormatada() {
  const hoje = new Date();
  const dia = String(hoje.getDate()).padStart(2, '0');
  const mes = String(hoje.getMonth() + 1).padStart(2, '0'); // Mês é 0-indexado
  const ano = hoje.getFullYear();
  return `<span class="math-inline">\{dia\}/</span>{mes}/${ano}`;
}
