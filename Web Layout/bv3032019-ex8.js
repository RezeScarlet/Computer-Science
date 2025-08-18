// Author: Guilherme de Souza Dionisio Rosseti BV: 3032019 
// Data de Implementação: 21/06/2025 
function exibirStringDaPosicao() {
  const stringsPreDefinidas = [
    "Zero", "Um", "Dois", "Três", "Quatro", "Cinco",
    "Seis", "Sete", "Oito", "Nove", "Dez"
  ];
  const campo = document.getElementById('campoPosicao'); // ID do input permanece o mesmo
  const posicao = parseInt(campo.value);
  const elementoResultado = document.getElementById('resultadoEx8'); // ID ajustado aqui!

  if (isNaN(posicao) || posicao < 0 || posicao > 10) {
    elementoResultado.textContent = "Por favor, digite um número entre 0 e 10.";
    elementoResultado.style.color = "red";
  } else {
    elementoResultado.textContent = stringsPreDefinidas[posicao];
    elementoResultado.style.color = "black";
  }
}
