import Data.Char

{-

1 - squareAll :: [Int] → [Int] which takes a list of integers and produces a list of the squares of those integers.
squareAll [6, 1, (-3)] = [36, 1, 9]

-}

squareAll :: [Int] -> [Int]

squareAll x = map (^2) x

{-

2 - Capitalize all the letters in the list of characters

-}

capL :: [Char] -> [Char]

capL x  = map toUpper x

{-

3 - Take a list of strings as its argument and reverses each element of the list and then reverses the resulting list. 

-}

nestReverse :: [String] -> [String]

nestReverse x = map reverse (reverse x)

{-

4 - Take an object and a list of lists and sticks the object at the front of every component list.

-}

inFront :: a -> [[a]] -> [[a]]

inFront x y = map ( x : ) y 

{-

5 - Take a list of strings as its argument and returns the list of their lengths.

-}

strLengths :: [String] -> [Int]

strLengths x = map length x

{-

6 - Take a list of strings and returns a list of the integers 0 and 1 such that 0 is the nth element of the value if the nth string of the argument contains an even number of characters and 1 is the nth element of the value if the nth string contains an odd number of characters.

-}

parityList :: [String] -> [Int]

parityList x = map check x where 

check x | even (length x) = 0
 | otherwise = 1

{-

7 - Take an integer n as its argument and returns the sum of the squares of the first n integers. 

-}

sumsq :: Int -> Int

sumsq x = sum (map (^2) [1..x])

{-

8 - Remove all the capital letters from a string

-}

noCapitals :: String -> String

noCapitals x = [ i | i <- x, i `notElem` ['A' .. 'Z'] ]

remUpper :: String -> String

remUpper = filter isLower


{-

9 - Take a list of strings as its argument and removes every occurrence of a vowel from each element.

-}

checkVowel :: String -> String

checkVowel x = [ i | i <- x, i `notElem` ['a','e','i','o','u','A','E','I','O','U'] ]

removeVowels :: [String] -> [String]

removeVowels x = map checkVowel x


cVow :: String -> String

cVow x = filter (\x -> not (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')) x

remVowels :: [String] -> [String]

remVowels = map cVow


{-

10 - Remove every occurrence of a vowel from a list of characters

-}

remVow :: [Char] -> [Char] 

remVow x = filter (\x -> not (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')) x

{-

11 - Changes lower case a’s to b’s, b’s to c’s and c’s to a’s in a String.

-}

rotabc = map f where 

 f 'a' = 'b' 
 f 'b' = 'c'
 f 'c' = 'a'
 f c = c