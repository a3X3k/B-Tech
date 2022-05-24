object Even_Odd {

  def main(args:Array[String]): Unit =
  {
    var n:Int = 0

    print("Enter the no of elements in the Array : ")

    n = scala.io.StdIn.readInt()

    var arr = new Array[Int](n)

    arr = readList(n)

    print("Elements in the Array : ")

    for (i <- arr)
    {
      print(i)
      print(" ")
    }

    countEven(arr)
    countOdd(arr)
  }

  def countEven(arr : Array[Int]): Unit = {

    var c: Int = 0

    for (i <- arr)
    {
      if (i % 2 == 0)
      {
        c += 1
      }
    }

    printf("\nNo Of Even Elements : %d", c)
  }

  def countOdd(arr : Array[Int]): Unit =
  {

    var c: Int = 0

    for (i <- arr)
    {
      if (i % 2 != 0)
      {
        c += 1
      }
    }

    printf("\nNo Of Odd Elements : %d", c)
  }

  def readList(n: Int): Array[Int] = {

    var arr = new Array[Int](n)

    for (i <- 0 to n-1) {

      print("Enter the element " + (i+1) + " : ")

      arr(i) = scala.io.StdIn.readInt()

    }

    return arr

  }
}
