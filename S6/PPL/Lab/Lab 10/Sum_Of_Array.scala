object Sum_Of_Array {

  def main(args: Array[String]) : Unit = {

    var n:Int = 0

    print("Enter the no of elements in the Array : ")

    n = scala.io.StdIn.readInt()

    var arr = new Array[Int](n)

    arr = readInts(n)

    print("Elements in the Array : ")

    for (i <- arr)
    {
        print(i)
        print(" ")
    }

    println()

    print("Sum of the Elements in the Array is " + sumInts(arr))

  }

  def readInts(n: Int): Array[Int] = {

    var arr = new Array[Int](n)

    for (i <- 0 to n-1) {

      print("Enter the element " + (i+1) + " : ")

      arr(i) = scala.io.StdIn.readInt()

    }

    return arr

  }

  def sumInts(arr: Array[Int]): Int = {

    var sum: Int = 0

    for (i <- arr) {
      sum += i
    }

    return sum

  }

}
