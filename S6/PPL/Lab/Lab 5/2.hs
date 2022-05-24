{-

2 - Define a function that takes an integer number n and returns the list of the first n prime numbers. 

-}

nPrime :: Int -> [Int]
nPrime n = findPrime n 2

findPrime :: Int -> Int -> [Int]
findPrime 0 _ = []
findPrime n x
 | isPrime x [2..floor (sqrt (fromIntegral x))] == False = findPrime n (x + 1)
 | otherwise = [x] ++ findPrime (n-1) (x + 1)

isPrime :: Int -> [Int] -> Bool

isPrime _ [] = True 

isPrime x (y : ys) 
 | x `mod` y == 0 = False
 | otherwise = isPrime x (ys)


{-

3 - Define a predicate to verifies whether a list is sorted in ascending order. 

-}

isSorted :: (Ord a) => [a] -> Bool
isSorted [] = True
isSorted [x] = True
isSorted (x : y : xs) = if x <= y then isSorted (y : xs) else False


{-

4 - Define a function myCons that behaves as : but is defined in terms of ++. 

-}

myConsRev :: [a]->[a]
myConsRev [] = []
myConsRev (x : xs) = myConsRev(xs) ++ [x]

myCons :: a -> [a] -> [a]
myCons a b = [a] ++ b

{-

5 - Define a function that takes an integer number n and a value v and creates a list containing n occurrences of v.   

-}

occuR :: a -> Int -> [a]

occuR v n = replicate n v


{-

6 - To find all the digits in a string where the prelude function is True on those characters which are digits: ' 0 ' , ' 1 ' up to ' 9 ' 

-}

dig :: String -> [Bool]
dig [] = []
dig (x : xs) = [x `elem` ['0' .. '9']] ++ dig (xs)


{-

7 - Give a definition of a function which doubles all the elements of a list of integers.

-}

doubleList :: [Int] -> [Int]

doubleList [] = []

doubleList (x:xs) = (2*x) : doubleList (xs)
