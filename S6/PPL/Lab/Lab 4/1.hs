{-

1- Define a function to find the largest of 3 numbers using if expression. 

-}

max3 :: (RealFloat x) => x -> x -> x -> x

max3 x y z = 

 if (x >= y) && (x >= z) then x
 else if (y >= x) && (y >= z) then y
 else z 


{-

2 - Define a function of type : Int -> String which reads a number and returns whether "even" or "odd". 

-}

evenodd :: Int -> String

evenodd x = 
 if x `mod` 2 == 0 then "Even"
 else "Odd"


{-

3 - Using Guards, determine the largest of two numbers. 

-}

maxof2 :: (RealFloat x) => x -> x -> x
maxof2 x y | x >= y = x
 | otherwise = y


{-

4 - Define a function distance to find the distance between two points in a xy-plane. 
Let P = (x1, y1) and Q = (x2, y2).

-}

dist :: (RealFloat x) => x -> x -> x -> x -> x

dist x1 y1 x2 y2 = sqrt((a)^2 + (b)^2) where 
 a = x2 - x1      
 b = y2 - y1


{-

5 - Define the function min and max which work with values of arbitrary type, so long as this type is an instance of the Ord class.  
Check this function, by passing different type of values, like int, float, char, string.

min :: (Ord a) a -> a -> a 

-}

min1 :: (Ord a) => a -> a -> a

min1 x y | x < y = x
 | otherwise = y


max1 :: (Ord a) => a -> a -> a

max1 x y | x > y = x
 | otherwise = y


{-

6 - Define a function divides,  divides :: Int -> Int -> Bool  which, verifies whether the first argument divides the second one. 
Define this function using if expression, guarded expression and multiple definition using pattern matching.

-}

divides :: Int -> Int -> Bool
divides 0 _ = False
divides x y = y `mod` x == 0

divide :: Int -> Int -> Bool
divide x y = if x == 0 then False
 else if y `mod` x == 0 then True
 else False

divi :: Int -> Int -> Bool
divi x y | x == 0 = False
 | y `mod` x == 0 = True
 | otherwise = False


{-

7 - Implement a function in Haskell for the following mathematic function defined as, [use pattern matching] 

-}

fun :: (Integral a) => a -> a

fun 0 = 7

fun x = ( 3 * x * x ) - 2


{-

8 - Define a function to implement Stirling’s formula

-}

stirling :: Int -> Float

stirling x = sqrt ( 2 * pi * a ) * ( (a / exp 1) ** a ) where
 a :: Float
 a = fromIntegral x


{-

9 - Define a function noOfSol of type :: Int -> Int -> Int -> String,  to find the number of solution of a quadratic equation.

-}

noOfSol :: Int -> Int -> Int -> String

noOfSol a b c | sol > 0 = "2 Solutions"
 | sol == 0 = "1 Solution"
 | otherwise = "No Solution" where
 sol = (b * b) - (4 * a * c)

{-

10 - Define a function rootsOfQuadraticEqu of appropriate type, to find the two roots of a Quadratic equation. 
Given a, b and c, find the roots x1 and x2.

-}

rootsOfQuadraticEqu :: (Float, Float, Float) -> (Float, Float)

rootsOfQuadraticEqu (a, b, c) = (x, y) where
 x = eq + sqrt root / ( 2 * a )
 y = eq - sqrt root / ( 2 * a )
 eq = - b / (2 * a)
 root = ( b * b ) - ( 4 * a * c )
 


