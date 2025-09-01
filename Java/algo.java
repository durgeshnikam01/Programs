public class algo {
    public static String caesarCipher(String input, int shift) {
        StringBuilder result = new StringBuilder();
        for (char c : input.toCharArray()) {
            if (Character.isUpperCase(c)) {
                char ch = (char)(((c - 'A' + shift) % 26) + 'A');
                result.append(ch);
            } else if (Character.isLowerCase(c)) {
                char ch = (char)(((c - 'a' + shift) % 26) + 'a');
                result.append(ch);
            } else {
                result.append(c);
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        String input = "Hello";
        int shift = 4;
        String output = caesarCipher(input, shift);
        System.out.println(output);
    }
}
