class List_Operations
{

  var n:Int = 0

  var arr1 = new Array[Int](n)

  var m:Int = 0

  var arr2 = new Array[Int](m)

  var str:String = ""

  var arr3 = new Array[Int](n + m)

}

object List_Operations
{
    def main(args: Array[String]): Unit =
    {
        var obj = new List_Operations()

        print("Enter the no of elements in the List 1 : ")

        obj.n = scala.io.StdIn.readInt()

        obj.arr1 = readList(obj.n)

        print("Elements in the List 1 : ")

        printList(obj.arr1)

        print("\nEnter the no of elements in the List 2 : ")

        obj.m = scala.io.StdIn.readInt()

        obj.arr2 = readList(obj.m)

        print("Elements in the List 2 : ")

        printList(obj.arr2)

        print("\nEnter the String : ")

        obj.str = scala.io.StdIn.readLine()

        printf("Length of the String : %d", obj.str.length())

        print("\n\nEnter the element which you want to find in the List 1 : ")

        printf("The element is found at the position : %d\n", obj.arr1.indexOf(scala.io.StdIn.readInt()))

        obj.arr3 = obj.arr1 ++ obj.arr2

        print("\nElements in the List 3 after cons'ing List 1 & List 2 : ")

        printList(obj.arr3)

        print("\nEnter the element which you want to cons to the front of the List 1 : ")

        obj.arr1 = scala.io.StdIn.readInt() +: obj.arr1

        print("Elements in the List 1 : ")

        printList(obj.arr1)

        print("\nEnter the element which you want to cons to the Last of the List 2 : ")

        obj.arr2 = obj.arr2 :+ scala.io.StdIn.readInt()

        print("Elements in the List 2 : ")

        printList(obj.arr2)

    }

    def readList(n: Int): Array[Int] = {

      var arr = new Array[Int](n)

      for (i <- 0 to n-1) {

        print("Enter the element " + (i+1) + " : ")

        arr(i) = scala.io.StdIn.readInt()

      }

      return arr

    }

    def printList(arr: Array[Int]):Unit =
    {
        for (i <- arr)
        {
          print(i)
          print(" ")
        }
        println()
    }
}
