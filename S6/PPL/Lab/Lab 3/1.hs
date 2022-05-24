{- 

1 - Write a function double that takes an integer input value and returns the double of the input argument.

-}

double :: Int -> Double

double x = y
 where y = fromIntegral x :: Double 

{- 

2 - Write a function successor which takes an integer input and returns the the next integer as input which is the next integer number.

-}

successor :: Int -> Int

successor x = x + 1

{-

3 - Write a function even which takes an integer and returns a boolean value True if even else False. [Use if - else]

-}

evenBool :: Int -> Bool

evenBool x = if x `mod` 2 == 0 then True else False

{-

4 - Write a function even' which takes an integer and returns a String value "Even" or "Odd" as output. [Use if -else]

-}

evenString :: Int -> String

evenString x = if x `mod` 2 == 0 then "Even" else "Odd"

{-

5 - Write a function abs to find the absolute of a number n. [ Use if -else]

-}

abs' :: Int -> Int

abs' x = if x >= 0 then x else -x

{-

6 - Write a function as described Q3 using guarded expression

-}

evenBool' :: Int -> Bool

evenBool' x | x `mod` 2 == 0 = True
            | otherwise = False

{-

7 - Write a function as described Q5 using guarded expression.

-}

abs'' :: Int -> Int

abs'' x | x >= 0 = x
        | otherwise = -x

{-

8 - Write a function max to find the largest among two numbers using guarded expressions.

-}

maxOf2 :: Int -> Int -> Int

maxOf2 x y | x > y = x
           | otherwise = y 

{-

9 - Write a function max3 to find the largest among three numbers using guarded expressions.

-}

maxOf3 :: Int -> Int -> Int -> Int

maxOf3 x y z | (x >= y) && (x >= z) = x
           | (y >= x) && (y >= z) = y
           | otherwise = z 


{-

10 - Write a function power which takes a float and an integer argument and returns a float value. 
Use multiple definitions using pattern matching. [ case1- with 0 as second argument, case2 - with non zero value as second argument]

-}

power :: Float -> Int -> Float

power _ 0 = 1

power x n = x * (power x (n-1))


{-

11 - Write a function isValidName which takes a name, a  String parameter and returns a if name is valid or not as indicated using a String output. 
Use multiple definition for the function - case1: empty string, case 2: non empty string.

-}

isValidName :: String -> String

isValidName "" = "Oh No, It's an Empty String"

isValidName x = "Hello " ++ x


{-

12 - Write a function checkEligible which takes two RealFloat inputs and returns a String based on the following cases. 
The two input values are the weight and height. 
Use where clause and constants as and when necessary.
weight / height ^ 2 is less than or equal to 18.5 - then output u r underweight
weight / height ^ 2 is less than or equal to 25.0 - then output u r normal
weight / height ^ 2 is less than or equal to 30.0 - then output u r fat
If not matching with all the other cases above  - then output u r a whale

-}

checkEligible :: (RealFloat x) => x -> x -> String

checkEligible weight height | bmi <= underweight = "You are Underweight!"
 | bmi <= normal = "You are Normal!"
 | bmi <= fat = "You are Fat!"
 | otherwise = "You are a Whale!" where 
 bmi = weight/height ^ 2
 underweight = 18.5
 normal = 25.0
 fat = 30.0


{-

13 - A year is leap if it can be divided by 4 but not by 100, or if it can be divided by 400. 
For example 1984 is leap, 1900 is not leap, and 2000 is leap. 
Define a predicate leap that evaluates to True when applied to a leap year and to False otherwise.

-}

leap :: Int -> String

leap x | x `mod` 4 == 0 && x `mod` 10 /= 0 = "It's a Leap Year!"
 | x `mod` 400 == 0 = "It's a Leap Year!"
 | otherwise = "It's not a Leap Year!"


{-

14 - Define a function that, when applied to two floating-point numbers representing the real and imaginary part of a complex number c, evaluates to the modulus of c.
c = x + i y be a complex number, then   |c| = √(x2 + y2)

-}

complexNumber :: Float -> Float -> Float

complexNumber x y = ( x * x + y * y ) ** (1/2)


{-

15 - Define two conversion functions boolToInt from boolean values to integer numbers
intToBool from integer numbers to boolean values in the spirit of the C language, where an integer number other than zero is considered “true”, and zero is considered “false”.

-}

boolToInt :: Bool -> Int

boolToInt x | x == True = 1
 | otherwise = 0


intToBool :: Int -> Bool

intToBool x | x == 0 = False
 | otherwise = True


{-

16 - Write Haskell functions corresponding to the following mathematical functions.

-}

f1 :: ( Num a ) => a -> a -> a -> a

f1 a b x = ( a * x ) + b


f2 :: ( Num a ) => a -> a -> a -> a -> a

f2 a b c x = ( a * x * x) + ( b * x ) + c


f3 :: ( Floating a ) => a -> a -> a

f3 n x = ( sin x ** n ) + ( cos x ** n )


f4 :: ( Floating a ) => a -> a -> a

f4 r s = ( ( pi * pi ) * ( r + s ) * ( r - s ) * ( r - s ) ) / 4


f5 :: ( Floating a ) => a -> a -> a

f5 x y = y ** ( 1/x )
