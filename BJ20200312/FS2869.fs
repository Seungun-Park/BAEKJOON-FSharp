open System
Console.ReadLine().Split ' '
|> Array.map int
|> fun x -> (x.[2] - x.[0]) / (x.[0] - x.[1]) + 1
|> Console.Write