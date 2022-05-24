{-

11 - Convert every character in string to uppercase and remove any digits in it

-}

import Data.Char

charToUp :: String -> String

charToUp string = [ toUpper i | i <- string, i `elem` [ 'a' .. 'z' ] || i `elem` [ 'A' .. 'Z' ] ]


{-

12 - Define a function that extracts the upper case letters only.

-}

extractUpper :: String -> String

extractUpper string = [ i | i <- string, isUpper i] 


{-

13 - Define a function that will capitalize the first letter of a String and return the entire String.

-}

caps :: String -> String

caps string = toUpper (head string) : tail string


{-

14 - Define a function cpy to make a string of n characters.

-}

cpy :: Char -> Int -> String

cpy c n = replicate n c


{-

15 - Define a function to place space characters between characters in a string

-}

space :: String -> String

space ( x : xs )
 | length(xs) == 0 = x : ""
 | otherwise = x : " " ++ space xs 