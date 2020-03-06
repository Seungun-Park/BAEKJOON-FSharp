open System
Console.ReadLine() |> ignore
Console.ReadLine().Split ' '
|> Array.map int
|> fun arr -> [Array.min arr; Array.max arr]
|> List.map string
|> String.concat " "
|> Console.Write