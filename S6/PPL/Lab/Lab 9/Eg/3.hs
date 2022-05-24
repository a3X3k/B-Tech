{-

3 - To find the sum of two numbers read from the user.

-}

{-

main = do

      a <- readLn
      b <- readLn

      putStr "Sum is "
      print (a+b)

-}

mysum a b = a + b

main = do

      a <- readLn
      b <- readLn

      print $ mysum a b