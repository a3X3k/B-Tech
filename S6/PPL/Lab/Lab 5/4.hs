{-

9 - Remove all non-letters from the list

-}

import Data.Char

removeNonL :: String -> String

removeNonL [] = []

removeNonL (x : xs) = if isLetter x then x : removeNonL xs
 else removeNonL xs


{-

10 - Define the function which returns the list of divisors of a positive integer (and the empty list for other inputs). 

-}

divisor :: Int -> [Int]

divisor x = findDiv x [ 1..(x - 1) ]

findDiv :: Int -> [Int] -> [Int]

findDiv x list 
 | length list == 0 = []
 | x `mod` (head list) == 0 = [head list] ++ findDiv x (tail list)
 | otherwise = findDiv x (tail list)


{-

11 - Define the function which picks out all occurrences of an integer n in a list.

-}

indexL :: [Int] -> Int -> [Int]

indexL list x = findOcc list x 0

findOcc :: [Int] -> Int -> Int -> [Int]

findOcc [] _ _ = []

findOcc (x:xs) ele i = if x == ele then [i] ++ findOcc xs ele (i + 1)
 else findOcc xs ele (i + 1)


{-

12 - Using matches or otherwise, define a function which is True if the Int is an element of the list, and False otherwise. 

-}

isElement :: [Int] -> Int -> Bool

isElement [] _ = False

isElement (x:xs) y = if x == y then True
 else isElement (xs) y


{-

13 - Given a list of lists, sum the lengths of inner lists - sumLength [ [1,2][2,3][5,7,8,9] ] must  return 8

-}

lenOfLists :: [[a]] -> Int

lenOfLists [] = 0

lenOfLists x = length(head x) + lenOfLists(tail x)




