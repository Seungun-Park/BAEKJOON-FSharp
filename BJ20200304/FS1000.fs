open System
Console.ReadLine().Split([|' '|])
|> Array.map int
|> Array.sum
|> Console.WriteLine