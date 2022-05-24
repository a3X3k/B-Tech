object Max_Product {

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

    println()

    maxProduct(arr)

  }

  def readList(n: Int): Array[Int] = {

    var arr = new Array[Int](n)

    for (i <- 0 to n-1) {

      print("Enter the element " + (i+1) + " : ")

      arr(i) = scala.io.StdIn.readInt()

    }

    return arr

  }

  def maxProduct(arr : Array[Int]): Unit =
  {
    var max1:Int = 0
    var max2:Int = 0

    for (i <- arr)
    {
      if(i > max1)
      {
        max2 = max1
        max1 = i
      }

      else if(i > max2)
      {
          max2 = i
      }
    }

    printf("Max Product : %d", max1 * max2)

  }

}
