import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder out = new StringBuilder();

        int t = Integer.parseInt(br.readLine().trim());

        long[] pow10 = new long[19];
        pow10[0] = 1;
        for (int i = 1; i <= 18; i++) {
            pow10[i] = pow10[i - 1] * 10L;
        }

        while (t-- > 0) {
            long n = Long.parseLong(br.readLine().trim());
            ArrayList<Long> answers = new ArrayList<>();

            for (int k = 1; k <= 18; k++) {
                long divisor = pow10[k] + 1;
                if (n % divisor == 0) {
                    answers.add(n / divisor);
                }
            }

            if (answers.isEmpty()) {
                out.append("0\n");
            } else {
                Collections.sort(answers);
                out.append(answers.size()).append("\n");
                for (long x : answers) {
                    out.append(x).append(" ");
                }
                out.append("\n");
            }
        }

        System.out.print(out.toString());
    }
}
