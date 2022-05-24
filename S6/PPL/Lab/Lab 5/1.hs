{-

1 - Write a script to find the last but one element of a list. 

-}

secondLast :: ( Ord a ) => [ a ] -> a

secondLast list = list !! ( length list - 2 ) 


{-

2 - Write a script to find the kth element of list, where k is the index.

-}

kthElement :: ( Ord a ) => [ a ] -> Int -> a

kthElement list i = list !! i


{-

3 - Write a script to find out whether a list is a palindrome. 

-}

isPalindrome :: ( Ord a ) => [ a ] -> Bool

isPalindrome list = list == reverse list


{-

4 - Write a script to remove duplicates from a given list.

-}

removeDup :: ( Ord a ) => [ a ] -> [ a ]

removeDup [] = []
removeDup ( x : xs ) = x : removeDup ( remove x xs )

 where

  remove :: ( Ord a ) => a -> [ a ] -> [ a ]
  
  remove x [] = []
  remove x ( y : ys )
   | x == y = remove x ys
   | otherwise = y : ( remove x ys )


{-

5 - Define a function duplicate which will duplicate each element of the list and produce a new list.

-}

adddup :: ( Ord a ) => [ a ] -> [ a ]

adddup [] = []

adddup ( x : xs ) = x : x : adddup ( xs )


{-

6 - Define a function to replicate the elements of a list n times.

-}

replic :: ( Ord a ) => [ a ] -> Int -> [ a ]

replic [] _ = []

replic ( x : xs ) n = replicate n x ++ replic xs n


{-

7 - Write a function to remove every nth element from the list. 
Let [1,2,3,4,5,6,7,8,9,10] be the list and value of n be 3, then the resultant list will be [1,2,4,5,7,8,10]( after every nth element of the input list is [1,2,3,4,5,6,7,8,9,10] removed).

-}

removeNth :: [a] -> Int -> [a]

removeNth [] _ = []

removeNth xs n = take (n-1) xs ++ removeNth (drop n xs) n


{-

8 - Split a list by defining a function which takes an input list and an integer n and divides the list into two the first n elements as the first list and the rest as the second list and form a list of lists.  
Let [1..10] be a list and value of n be 4 then the new list formed is 1,2,3,4],[5,6,7,8,9,10. Another example I/P splits "amr" 4 & O/P- ["amr",""]

-}

splitn :: Int -> [a] -> ([a], [a])

splitn n x = (take n x, drop n x)


{-

9 - Define a function that will slice a list based on the input indices i and k. Consider a list [1..10] and let i = 2 and k = 4 respectively then the resultant list will be [3,4,5].

-}

slice :: [a] -> Int -> Int -> [a]

slice x i k = drop i (take (k+1) x)


{-

10 - Define a function to remove the kth indexed element from a list. 
Consider a list [1..10], and value of n be 2, then resultant list will be [1,2,4,5,6,7,8,9,10]. 

-}

remk :: [a] -> Int -> [a]
remk [] _ = []
remk (x:xs) 0 = xs
remk (x:xs) n = x : remk (xs) (n-1) 


{-

11 - Define a function that will insert an element n at a particular index i of a list xs. Let xs=[1..10], i=2, n=11, then the output will be [1,2,11,3,4,5,6,7,8,9,10]. 

-}

insertn :: [a] -> a -> Int -> [a]
insertn [] _ _ = []
insertn x element 0 = element : x
insertn (x : xs) element n = x : insertn xs element (n - 1)





