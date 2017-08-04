public class Test {
  public static void main(String[] args){
    System.out.println(hoge());
    int result[] = fuga();
    System.out.println(result[0] + result[2]);
  }

  private static String hoge(){
    String fuga = "fugaaaaaaaaaaaaa";
    return(fuga);
  }

  private static int[] fuga(){
    int result[] = {1, 2, 3, 6, 19};
    return(result);
  }
}
