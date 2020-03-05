open System
let N = Console.ReadLine() |> int
[|1..N|]
|> Array.sum
|> Console.Write