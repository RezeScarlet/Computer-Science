class Biblioteca {
  private String nome;

  public Biblioteca(String nome) {
    this.nome = nome;
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public void exibirInformacoes() {
    System.out.println("Biblioteca: " + nome);
  }
}
