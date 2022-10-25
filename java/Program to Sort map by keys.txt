import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

class Main {
  public static void main(String[] args) {

    // create a hashmap
    Map<String, String> languages = new HashMap<>();
    languages.put("pos3", "JS");
    languages.put("pos1", "Java");
    languages.put("pos2", "Python");
    System.out.println("Map: " + languages);

    // create a tree map from the map
    TreeMap<String, String> sortedNumbers = new TreeMap<>(languages);
    System.out.println("Map with sorted Key" + sortedNumbers);

  }
}