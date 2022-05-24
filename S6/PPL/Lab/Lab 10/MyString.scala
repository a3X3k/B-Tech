class MyString {

  val MyString : String = "Hello"

}

object String_Operations {

  def main(args: Array[String]): Unit = {

  var obj = new MyString()

  printf("The String is : %s", obj.MyString)

  printf("\nLength of the String : %d", obj.MyString.length())

  print("\n\nEnter the Character you want to find : ")

  var key: Char = scala.io.StdIn.readChar()

  printf("No of Occurrences of %c in %s is %d\n", key, obj.MyString, obj.MyString.count(_ == key))

  }

}