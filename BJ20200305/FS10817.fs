open System
Console.ReadLine().Split()
|> Array.map int
|> Array.sort
|> fun x -> x.[1]
|> Console.Write