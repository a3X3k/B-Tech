{-

1 - Use foldr and foldl to define functions lengthr and lengthl respectively to find the number of elements in a list

-}

lengthr :: [Int] -> Int

lengthl :: [Int] -> Int

lengthr = foldr (\x y -> 1 + y) 0

lengthl = foldl (\x y -> x + 1) 0

{-

2 - Find the smallest element of a list by defining functions minr and minl with the implementation of foldr and foldl respectively.

-}

minr :: [Int] -> Int

minl :: [Int] -> Int

minr = foldr (\x y -> if x < y then x else y) 1000000

minl = foldl (\x y -> if x < y then x else y) 1000000

{-

3 - Using foldr, define a function to reverse the current list

-}

rev :: [Int] -> [Int]

rev = foldr (\x y -> y ++ [x]) []

{-

4 - Define a function remover using foldr which takes two strings as its arguments and removes every letter from the second list that occurs in the first list.

-}

remove :: String -> String -> String

remove str1 str2 = foldr(\x y -> if elem x str1 then y else x : y) "" str2


{-

5 - Remove adjacent duplicates from a list

-}

rmDup :: Eq a => [a] -> [a]
rmDup [] = []
rmDup [x] = [x]
rmDup (x:y:xs) | x == y = rmDup(y:xs)
 | otherwise = x : rmDup(y : xs)

joinr :: Eq a => a -> [a] -> [a]
joinr x [] = [x]
joinr x xs | x == head xs = xs
 | otherwise = [x] ++ xs

rmdFoldr :: Eq a => [a] -> [a]
rmdFoldr [] = []
rmdFoldr ys = foldr joinr [] ys

joinl :: Eq a => [a] -> a -> [a]
joinl [] x = [x]
joinl xs x | last xs == x = xs
 | otherwise = xs ++ [x]

rmdFoldl :: Eq a => [a] -> [a]
rmdFoldl ys = foldl joinl [] ys


{-

6 - Define a function approxe n using foldl

-}

approx :: Float -> Float

approx n = foldl findApprx 1 [1 .. n] where findApprx x y = x + (1/product[1 .. y])


{-

7 - Define the function mult using lambda expressions.

-}

mult :: Num a => a -> a -> a -> a

mult a b c = (\x y z -> x * y * z) a b c


{-

8 - Define the function add using lambda expressions.

-}

add :: Num a => (a,a) -> (a,a) -> (a,a)

add (a,b) (c,d) = (\x0 y0 x1 y1 -> (x0+x1, y0+y1)) a b c d


{-

9 - Using Lamda expression check whether an input list is palindrome or not

-}

palindrome :: Eq a => [a] -> String

palindrome list = (\x -> if x == reverse x then "Palindrome" else "Not a Palindrome") list


{-

10 - Check whether each list in the list is palindrome or not.

-}


checkPal :: Eq a => [a] -> Bool

checkPal x = (\x -> x == reverse x) x

palindromeList :: Eq a => [[a]] -> [Bool]

palindromeList list = map checkPal list