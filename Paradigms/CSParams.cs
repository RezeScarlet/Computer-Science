using System;

namespace HelloWorld
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("N1: ");
      int n1 = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("N2: ");
      int n2 = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("Sum: " + Sum(n1, n2, 10));
    }
    public static int Sum(params int[] nums) {
      int sum = 0;
      for (int i = 0; i < nums.Length; i++) {
        sum += nums[i];
      }
      return sum;
    }
  }
}
