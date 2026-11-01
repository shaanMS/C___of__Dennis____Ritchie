import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) {
        try {
            Socket socket = new Socket("127.0.0.1", 8080);

            // Server ko message bhejo
            OutputStream out = socket.getOutputStream();
            out.write("Hello C Server!".getBytes());
            out.flush();

            // Server ka reply padho
            InputStream in = socket.getInputStream();

            byte[] buffer = new byte[100];
            int n = in.read(buffer);

            System.out.println("Server: " +
                    new String(buffer, 0, n));

            socket.close();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
