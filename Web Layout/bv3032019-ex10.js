// Author: Guilherme de Souza Dionisio Rosseti BV: 3032019 
// Data de Implementação: 21/06/2025 
function validarLogin() {
  const login = document.getElementById('campoLogin').value; 
  const senha = document.getElementById('campoSenha').value;
  const elementoMensagem = document.getElementById('mensagemLoginEx10');

  const loginCorreto = "Guilherme Rosseti";
  const senhaCorreta = "BV3032019";

  if (login.trim() === "" || senha.trim() === "") {
    elementoMensagem.textContent = "Login e Senha não podem estar vazios.";
    elementoMensagem.style.color = "red";
  } else if (login === loginCorreto && senha === senhaCorreta) {
    elementoMensagem.textContent = "Login bem-sucedido!";
    elementoMensagem.style.color = "green";
  } else {
    elementoMensagem.textContent = "Login ou Senha inválidos.";
    elementoMensagem.style.color = "red";
  }
}
