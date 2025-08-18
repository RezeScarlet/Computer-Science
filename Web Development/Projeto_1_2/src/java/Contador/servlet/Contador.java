package Contador.servlet;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.rmi.ServerRuntimeException;

/**
 * 
 * @author rezescarlet
 */
@WebServlet(name = "Contador", urlPatterns = { "/Contador" })
public class Contador extends HttpServlet {
  @Override
  protected void doGet(HttpServletRequest request, HttpServletResponse response)
      throws ServerRuntimeException, IOException {
    processRequest(request, response);

  }

  @Override
  protected void doPost(HttpServletRequest request, HttpServletResponse response)
      throws ServerRuntimeException, IOException {
    processRequest(request, response);

  }

  protected void processRequest(HttpServletRequest request, HttpServletResponse response)
      throws ServerRuntimeException, IOException {
    for (int i = 1; i <= 30; i++) {
      System.out.println(i);
    }
  }
}
