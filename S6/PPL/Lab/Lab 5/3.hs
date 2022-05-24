{-

8 - Give a definition of a function which converts all small letters in a String into capitals, leaving the other characters unchanged. 

-}

import Data.Char

toUpCase :: String -> String

toUpCase [] = []

toUpCase (x : xs) = if isLower x then toUpper x : toUpCase xs
 else x : toUpCase xs



