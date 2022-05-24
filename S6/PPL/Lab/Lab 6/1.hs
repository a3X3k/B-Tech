{-

1 - Define a function that maps a positive integer to its list of factors

-}

factor :: Int -> [Int]

factor y = [ x | x <- [1 .. y], y `mod` x == 0]


{-

2 - Define a function that returns the list of all prime numbers up to a given limit n

-}

isPrime :: Int -> Bool

isPrime n = null [i | i <- [2 .. floor (sqrt (fromIntegral n))], n `mod` i == 0]

nPrime :: Int -> [Int]

nPrime n = [x | x <- [2 .. n], isPrime x]


{-

3 - Define a function pairs that uses the zip function for returning the list of all pairs of adjacent elements from a list.

-}

pairs :: [a] -> [(a, a)]

pairs x = zip x (tail x)


{-

4 - Define a function sorted that decides if the elements in a list are sorted [here we are checking list which is formed by pairs function].

-}

pair :: [a] -> [(a, a)]

pair x = zip x (tail x)

sortF :: (Ord a) => (a, a) -> Bool

sortF (x,y) = if x <= y then True else False

sorted :: (Ord a) => [a] -> Bool

sorted x = null [ i | i <- (pair x), sortF i == False]


{-

5 - Define a function positions using zip function which will return the list of all positions of a value in a list.

-}

positions :: Eq a => [a] -> a -> [Int]

positions list x = [i | (i, j) <- zip [0 .. ] list, j == x]


{-

6 - Define a function count to get the number of times a character occurs in a String

-}

count :: (Ord a) => [a] -> a -> Int

count list x = length [ i | i <- list, i == x ]


{-

7 - Consider a triple (x,y,z) of positive integers called pythagorean if x^2 + y^2 = z^2. 
Define a function pythFunction:: Int-> [(Int, Int, Int)] which will map an integer n to all such triples with components in [1..n]

-}

pythagorean :: Int -> [(Int, Int, Int)]

pythagorean n = [ (x, y, z) | x <- [ 1.. n ], y <- [ 1 .. n ], z <- [ 1 .. n ], ( x^2 + y^2 == z^2 ) ]


{-

8 - A perfect number is a positive integer which is equal to the sum of all its factors, excluding the number itself. Using list comprehension, define a function perfects :: Int->Int that returns all the perfect numbers up to a given limit n.

-}

fact :: Int -> [Int]

fact x = [ i | i <- [ 1 .. (x - 1) ], x `mod` i == 0]


sumOfF :: [Int] -> Int

sumOfF [] = 0

sumOfF ( x : xs ) = x + sumOfF xs


perfect :: Int -> [Int]

perfect n = [ i | i <- [ 1 .. n ], sumOfF (fact i) == i]


{-

9 - Define a function scalar to find the scalar product of list elements of two lists xs and ys of length n.

-}

scalarP :: [Int] -> [Int] -> [Int]

scalarP x y = [ i * j | ( i, j ) <- zip x y ]


{-

10 - Define the function sumsq, which takes an integer n as its argument and returns the sum of the squares of the first n integers.

-}

sumSQ :: Int -> Int

sumSQ n = sum [ i*i | i <- [ 1 .. n ] ]
