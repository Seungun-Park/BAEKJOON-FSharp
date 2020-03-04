open System
Console.ReadLine().Split()
|> Array.map int
|> fun a -> a.[0] - a.[1]
|> Console.Write