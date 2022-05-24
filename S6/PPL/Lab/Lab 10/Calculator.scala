object Calculator {

    def main(args: Array[String]): Unit =
    {
        print("Enter Number 1 : ")
        var x = scala.io.StdIn.readInt()

        print("Enter Number 2 : ")
        var y = scala.io.StdIn.readInt()

        print("Enter 1 - Addition, 2 - Subtraction, 3 - Multiplication, 4 - Division : ")
        var z = scala.io.StdIn.readInt()

        calc(x,y,z)
    }

    def calc(x: Int, y: Int, z: Int): Unit = z match
    {
        case 1 => printf ("Addition of %d & %d is %d", x,y, (x + y))

        case 2 => printf ("Subtraction of %d & %d is %d", x,y, (x - y))

        case 3 => printf ("Multiplication of %d & %d is %d", x,y, (x * y))

        case 4 => printf ("Division of %d & %d is %d", x,y, (x / y))

        case _ => print("Wrong Option :(")

    }

}
