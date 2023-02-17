import java.util.Scanner;
public class RSA_Algorithm {
    static Scanner sc;
    static long number1,number2,number;
    static long psi_of_number;
    static long choice;
    static long gcd,t1,t2,mmi;
    static long [] temp;
    static String Plain_Text;
    static long[] encrypted;
    static long[] decrypted;
    public static void main(String[] args)
    {
        sc = new Scanner(System.in);
        keyGeneration();
    }

    private static void keyGeneration()
    {
        System.out.println("ENTER TWO LARGE PRIME NUMBERS");
        while(true)
        {
            System.out.print("Enter first number = ");
            number1 = sc.nextLong();
            System.out.print("Enter second number = ");
            number2 = sc.nextLong();
            long result = modular_multiplicative_inverse(number1,number2);
            if(result == 1)
            {
                break;
            }
            else
            {
                System.out.println("\nTHESE NUMBERS ARE NOT CO-PRIME TO EACH OTHER");
                System.out.println("Enter a pair of CO-PRIME numbers,");
            }
        }
        number = number1 * number2;
        psi_of_number = (number1- 1) * (number2 - 1);
        // Choosing the value of e which should be inbetween number and psi_of_number and their gcd should be equal to 1
        System.out.println("Choose a number inbetween 1 and "+ psi_of_number);
        System.out.println("THE GCD OF THE CHOOSEN NUMBER AND " + psi_of_number + " SHOULD BE = 1");
        while (true)
        {
            choice =  sc.nextLong();
            gcd = modular_multiplicative_inverse(choice,psi_of_number);
            if(gcd == 1)
            {
                mmi = ((t1%(psi_of_number)) + psi_of_number)%psi_of_number;
                System.out.println(mmi);
                break;
            }
            System.out.println("The choosen number is not co-prime with the number "+ psi_of_number);
            System.out.print("So, Choose another number = ");
        }
        // Public and Private keys
        System.out.println("\nThe PUBLIC KEY = { " + choice + ", "+ number + " }");
        System.out.println("The PRIVATE KEY = { " + mmi + ", "+ number + " }\n");
        // Encrypting data
        encryption();
    }

    private static void encryption()
    {
        encrypted = new long[100];
        decrypted = new long[100];
        temp = new long[100];
        long character, encrypt, k;
        System.out.print("Enter the message = ");
        sc.nextLine();
        Plain_Text = sc.nextLine();
        int i = 0;
        while (i != Plain_Text.length())
        {
            character = Plain_Text.charAt(i) - 96;
            k = 1;
            for(int j = 0; j < choice; j++)
            {
                k = (k * character)%number;
            }
            temp[i] = k;
            encrypt = k + 96;
            encrypted[i] = encrypt;
            i++;
        }
        encrypted[i] = -1;
        System.out.print("\nEncrypted message = ");
        for (i = 0; encrypted[i] != -1; i++)
        {
            System.out.print(encrypted[i] + " ");
        }
        // Calling the decryption function
        decryption();
    }

    private static void decryption()
    {
        long pt, encrypt, k;
        int i = 0;
        while (encrypted[i] != -1)
        {
            encrypt = temp[i];
            k = 1;
            for (int j = 0; j < mmi; j++)
            {
                k = (k * encrypt)%number;
            }
            pt = k + 96;
            decrypted[i] = pt;
            i++;
        }
        decrypted[i] = -1;
        System.out.print("\nDecrypted message = ");
        for (i = 0; decrypted[i] != -1; i++)
        {
            System.out.print((char)decrypted[i]);
        }
        System.out.println();
    }
    private static long modular_multiplicative_inverse(long number, long modulo)
    {
        if(number ==0)
        {
            t1=0;
            t2 = 1;
            return modulo;
        }

        // Finding the remainder of the number with modulo
        long remainder = modulo%number;

        // Recursively calling the function to find gcd so we can say that the mmi exist or not.
        long gcd = modular_multiplicative_inverse(remainder,number);

        // Finding the quotient of the number with modulo
        long quotient = modulo/number;

        // The Extended Euclidean Algorithm
        // To find the value of MMI
        long temp = t1;
        t1 = t2-quotient*t1;
        t2 = temp;

        // Returning the gcd to check whether the inverse exist or not
        return gcd;
    }
}