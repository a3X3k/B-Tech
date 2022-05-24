object Matrix_Mult {

  def main(args: Array[String])
  {
    var M1 = Array.ofDim[Int](2, 2)
    var M2 = Array.ofDim[Int](2, 2)
    var M3 = Array.ofDim[Int](2, 2)

    var i: Int = 0
    var j: Int = 0

    M1 = readMatrix()

    M2 = readMatrix()

    println("Matrix 1")

    printMatrix(M1)

    println("Matrix 2")

    printMatrix(M2)

    M3 = computeMatrix(M1, M2)

    println("Multiplication Results")

    printMatrix(M3)

  }

  def readMatrix() : Array[Array[Int]] = {

      var M = Array.ofDim[Int](2, 2)

      var i: Int = 0
      var j: Int = 0

      while (i < 2)
      {
        j = 0

        while (j < 2)
        {
          printf("Enter the element [%d][%d] of Matrix : ", i,j)

          M(i)(j) = scala.io.StdIn.readInt

          j += 1
        }

        i += 1
      }

      return M

  }

  def computeMatrix(M1 : Array[Array[Int]], M2 : Array[Array[Int]]) : Array[Array[Int]] = {

    var i: Int = 0
    var j: Int = 0
    var k: Int = 0
    var M3 = Array.ofDim[Int](2, 2)
    var sum: Int = 0

    while (i < 2)
    {

      j = 0

      while (j < 2)
      {
        sum = 0

        k = 0

        while (k < 2)
        {
          sum = sum + (M1(i)(k) * M2(k)(j))
          k += 1
        }

        M3(i)(j) = sum

        j += 1
      }
      i += 1
    }
    return M3

  }

  def printMatrix(M : Array[Array[Int]]) : Unit = {

    var i: Int = 0
    var j: Int = 0

    i = 0

    while (i < 2)
    {

      j = 0

      while (j < 2)
      {
        print(M(i)(j))
        print(" ")
        j += 1
      }

      println()
      i += 1

    }
  }

}
