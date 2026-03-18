import java.io.*;

public class FileOperations {
    public static void main(String[] args) {
        try {
            // 1. Create a file
            File file = new File("sample.txt");
            if (file.createNewFile()) {
                System.out.println("File created: " + file.getName());
            } else {
                System.out.println("File already exists");
            }

            // 2. Write to the file
            FileWriter writer = new FileWriter("sample.txt");
            writer.write("Hello, this is a simple file operation in Java.\n");
            writer.close();
            System.out.println("Data written to file");

            // 3. Append to the file
            FileWriter appendWriter = new FileWriter("sample.txt", true);
            appendWriter.write("Appending new line.\n");
            appendWriter.close();
            System.out.println("Data appended");

            // 4. Read from the file
            FileReader reader = new FileReader("sample.txt");
            BufferedReader br = new BufferedReader(reader);
            String line;

            System.out.println("\nFile Content:");
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
            br.close();

        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}