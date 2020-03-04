open System
Console.ReadLine().Split()
|> Array.map double
|> fun a -> a.[0] / a.[1]
|> Console.Write