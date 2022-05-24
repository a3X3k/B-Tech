{-

2 - To create a list of characters reading the input from the user.

-}

main = do 
{
         a <- getL;

         print a;
}

getL :: IO [Char]

getL = do { 

c <- getChar ;

if c == '\n' then return [];

else do { 

 cs <- getL;

 return (c : cs); 

}

}