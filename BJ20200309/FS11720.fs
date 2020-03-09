open System
Console.ReadLine() |> ignore
Console.ReadLine()
|> Seq.toList
|> List.map string
|> List.map int
|> List.sum
|> Console.Write