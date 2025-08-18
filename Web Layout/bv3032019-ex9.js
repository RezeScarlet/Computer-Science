// Author: Guilherme de Souza Dionisio Rosseti BV: 3032019 
// Data de Implementação: 21/06/2025 
function verificarTextos() {
  const texto1 = document.getElementById('campoTexto1').value; // ID do input permanece o mesmo
  const texto2 = document.getElementById('campoTexto2').value; // ID do input permanece o mesmo
  const elementoMensagem = document.getElementById('mensagemValidacaoEx9'); // ID ajustado aqui!

  if (texto1.trim() === "" || texto2.trim() === "") {
    elementoMensagem.textContent = "Ambos os campos não podem estar em branco.";
    elementoMensagem.style.color = "red";
  } else if (texto1 === texto2) {
    elementoMensagem.textContent = "Os textos são idênticos!";
    elementoMensagem.style.color = "green";
  } else {
    elementoMensagem.textContent = "Os textos são diferentes.";
    elementoMensagem.style.color = "orange";
  }
}
