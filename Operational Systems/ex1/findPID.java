import java.io.IOException;

public class findPID {

  public static void main(String[] args) {
    if (args.length > 0) {
      System.out.println(args[0]);
      ProcessBuilder builder = new ProcessBuilder(args[0]);

      try {
        Process process = builder.start();
        System.out.println(process.pid());

      } catch (IOException e) {
      }
      
    } else {
      System.out.println("Processo Atual");
      ProcessHandle processHandle = ProcessHandle.current();
      System.out.println(processHandle.pid());

    }
  }
}
