class Professor {
  private String nome;
  private String especialidade;
  private int anosExperiencia;

  public Professor(String nome, String especialidade, int anosExperiencia) {
    this.nome = nome;
    this.especialidade = especialidade;
    this.anosExperiencia = anosExperiencia;
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public String getEspecialidade() {
    return especialidade;
  }

  public void setEspecialidade(String especialidade) {
    this.especialidade = especialidade;
  }

  public int getAnosExperiencia() {
    return anosExperiencia;
  }

  public void setAnosExperiencia(int anosExperiencia) {
    this.anosExperiencia = anosExperiencia;
  }

  public void ensinar() {
    System.out.println("O professor " + nome + " está ensinando.");
  }

  public void avaliarAluno(Aluno aluno) {
    System.out.println("O professor " + nome + " está avaliando o aluno " + aluno.getNome());
  }

  public void exibirPerfil() {
    System.out.println("Professor: " + nome);
    System.out.println("Especialidade: " + especialidade);
    System.out.println("Anos de Experiência: " + anosExperiencia);
  }
}
