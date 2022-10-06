import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;


public class Main {
    public static void main(String[] args) {
        HashMap<String, HashSet<StringZ>> choices = new HashMap<String, String>();

        // Add keys and values (Country, City)
        choices.put("Reisi", "London");
        choices.put("Rouhani", "Berlin");
        choices.put("Haddad", "Oslo");
        choices.put("Jalili", "Washington DC");

        ArrayList<String> arrayListOfCandidated = new ArrayList<String>();

        Set<String> setOfCandidats = choices.keySet();



        for (String candidate: setOfCandidats) {
            // System.out.println(candidate);
            arrayListOfCandidated.add(candidate);
        }

        // System.out.println(arrayListOfCandidated);



        for (String i : choices.keySet()) {
            System.out.println("key: " + i + " value: " + choices.get(i));
        }

        String newCandidate = "ChamRun";
        choices.put(newCandidate, "");

        System.out.println("\n\n");

        for (String i : choices.keySet()) {
            System.out.println("key: " + i + " value: " + choices.get(i));
        }



    }
}
