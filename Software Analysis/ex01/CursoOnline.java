class CursoOnline extends Curso {
  private String plataforma;

  public CursoOnline(String nome, int duracaoMeses, Professor professor, String Plataforma) {
    this.nome = nome;
    this.duracaoMeses = duracaoMeses;
    this.professor = professor;
    this.plataforma = plataforma;
  }
    this.biblioteca = new Biblioteca("Biblioteca " + nome);
  }

  public String getPlataforma() {
    return plataforma;
  }

  public void setPlataforma(String plataforma) {
    this.plataforma = plataforma;
  }

  @Override
  public void exibirInformacoes() {
    super.exibirInformacoes();
    System.out.println("Plataforma: " + plataforma);
  }
}
