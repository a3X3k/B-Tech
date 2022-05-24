object Max_Of_Two {

  def main(args:Array[String]): Unit ={

    var a:Int = 0
    var b:Int = 0

    print("Enter the number 1 : ")

    a = scala.io.StdIn.readInt()

    print("Enter the number 2 : ")

    b = scala.io.StdIn.readInt()

    println("The Largest number is : " + (if (a > b) a else b))

  }

}
