const corBtn = document.getElementById("cor");
const ocultarBtn = document.getElementById("ocultar");
const voltarBtn = document.getElementById("voltar");

corBtn.addEventListener("click", () => {
  const atual = document.body.style.backgroundColor;
  document.body.style.backgroundColor = atual == "black" ? "#191724" : "black";
});


ocultarBtn.addEventListener("click", () => {
  const container = document.getElementById("container");
  container.style.display = "none"
});
