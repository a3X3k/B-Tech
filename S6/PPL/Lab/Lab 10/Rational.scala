class Rational(var num:Int, var denom:Int){

  def this (n:Int) = this(n,1)

  def display() = println("Rational Number: "+num+"/"+denom)

  def gcd(a: Int, b: Int): Int = {

    b match {

      case 0 => a

      case x if x>a => gcd(x, a)

      case x =>gcd (x, a%x)

    }
  }

  def +(a:Rational):Rational = {

    var g = gcd(denom, a.denom)

    var l = (denom * a.denom) / g

    return Rational(num * l / denom + a.num*l / a.denom, l)

  }

  def +(a: Int): Rational = this+ Rational(a)

  def -(a: Rational):Rational = {

    var g = gcd(denom, a.denom)

    var 1 = (denom * a.denom) / g

    return Rational(num * l / denom - a.numl / a.denom, l)

  }

  def -(a:Int): Rational = this - Rational(a) def *(a:Rational): Rational =

  var x = num * a.num

  var y = denom * a.denom

  var g = gcd(x,y)

  return Rational(x/g,y/g) def *(a: Int): Rational = this

  def /(a: Rational): Rational =

    * Rational(a)

  var p = Rational(a.denom, a.num) return this * p

  def /(a: Int): Rational = this / Rational(a)

}

object q9{

  def main(args:Array [String]) =

  var a = Rational(3,4) (4,5)

  var b = Rational

  (a+b).display()

  (a+3).display()

  (a-b).display()

  (a-3).display()

  (a*b).display()

  (a*3).display()

  (a/b).display()