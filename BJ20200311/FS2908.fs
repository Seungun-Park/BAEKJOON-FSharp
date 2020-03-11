open System
Console.ReadLine()
|> fun x -> String(x.ToCharArray() |> Array.rev).Split ' '
|> Array.map int
|> Array.max
|> Console.Write